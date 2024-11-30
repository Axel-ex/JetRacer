#include "ServoNode.hpp"
#include "bus_msgs/srv/i2c_service.hpp"
#include "std_msgs/msg/u_int8.hpp"
#include <functional>
#include <rclcpp/client.hpp>
#include <rclcpp/logger.hpp>
#include <rclcpp/logging.hpp>

using namespace std::chrono_literals;

ServoNode::ServoNode() : Node("servo_node")
{
    this->get_logger().set_level(rclcpp::Logger::Level::Debug);

    i2c_client_ = this->create_client<bus_msgs::srv::I2cService>("i2c_service");
    direction_subscriber_ = this->create_subscription<std_msgs::msg::UInt8>(
        "direction", 10,
        std::bind(&ServoNode::writeToI2c, this, std::placeholders::_1));

    while (!i2c_client_->wait_for_service(2s))
        RCLCPP_INFO(this->get_logger(), "Waiting for i2c interface to start");

    if (init_() != EXIT_SUCCESS)
    {
        RCLCPP_ERROR(this->get_logger(), "Fail initiating servo motor");
        return;
    }

    RCLCPP_INFO(this->get_logger(), "Starting the Servo node");
}

ServoNode::~ServoNode() {}

/**
 * @brief request to the i2c service a write operation upon receiving a message
 * in the direction topic
 *
 * @param direction
 */
void ServoNode::writeToI2c(const std_msgs::msg::UInt8::SharedPtr direction)
{

    if (direction->data > 180)
    {
        RCLCPP_ERROR(this->get_logger(),
                     "writing direction: invalid direction %d",
                     direction->data);
        return;
    }

    // Map the angle (0 to 180) to a pulse width (750 us = 0 degres to 2250 us =
    // 180).
    int pulseWidth = MIN_PW + (direction->data * (MAX_PW - MIN_PW)) / 180;
    // Calculate the on time and off time in microseconds
    int onTime = pulseWidth; // on time is the pulse width
    int offTime =
        20000 - onTime; // off time is the rest of the period (20 ms 0 20000 us)

    // Pass the calculated on/off times to setPWM
    this->setPWM(DEFAULT_CHANNEL, onTime, offTime);
}

/**
 * @brief handle the response from the i2c service
 *
 * @param response
 */
void ServoNode::asyncI2CResponse(
    rclcpp::Client<bus_msgs::srv::I2cService>::SharedFuture response)
{
    if (response.get()->success)
        RCLCPP_DEBUG(this->get_logger(), "SUCCESS");
    else
        RCLCPP_ERROR(this->get_logger(), "FAILURE: %s",
                     response.get()->message.c_str());
}

// Init PCA9685
/**
 * @brief init the pCA9685 by writing to the write register (see
 * https://github.com/mincrmatt12/PCA9685/blob/master/src/PCA9685.cpp)
 *
 * @return
 */
int ServoNode::init_()
{
    return setRegister_(MODE1_REGISTER, 0b00010000) &&
           setRegister_(PRESCALE_REGISTER, PRESCALE_VALUE) &&
           setRegister_(MODE1_REGISTER, 0);
}

int ServoNode::setRegister_(uint8_t reg, uint8_t value)
{
    auto request = std::make_shared<bus_msgs::srv::I2cService::Request>();

    request->set__read_request(false);
    request->set__device_address(SERVO_ADRESS);
    request->write_data.push_back(reg);
    request->write_data.push_back(value);

    i2c_client_->async_send_request(
        request,
        std::bind(&ServoNode::asyncI2CResponse, this, std::placeholders::_1));

    return EXIT_SUCCESS;
}

/**
 * @brief set
 *
 * @param channel to control
 * @param on
 * @param off
 * @return
 */
int ServoNode::setPWM(int channel, int on, int off)
{
    if (channel > 15)
    {
        RCLCPP_ERROR(this->get_logger(), "Invalid chanel number: %d", channel);
        return EXIT_FAILURE;
    }

    auto lowON = (uint8_t)(on & 0xFF);
    auto highON = (uint8_t)((on >> 8) & 0xFF);
    auto lowOFF = (uint8_t)(off & 0xFF);
    auto highOFF = (uint8_t)((off >> 8) & 0xFF);

    setRegister_((uint8_t)(CHANNEL_REGISTER + (channel * 4)), lowON);
    setRegister_((uint8_t)(CHANNEL_REGISTER + (channel * 4) + 1), highON);
    setRegister_((uint8_t)(CHANNEL_REGISTER + (channel * 4) + 2), lowOFF);
    setRegister_((uint8_t)(CHANNEL_REGISTER + (channel * 4) + 3), highOFF);

    return EXIT_SUCCESS;
}
