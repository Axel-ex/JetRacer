#include "ServoNode.hpp"
#include "bus_msgs/srv/i2c_service.hpp"
#include "std_msgs/msg/u_int8.hpp"
#include <functional>
#include <rclcpp/client.hpp>
#include <rclcpp/logger.hpp>
#include <rclcpp/logging.hpp>

ServoNode::ServoNode() : Node("servo_node")
{
    this->get_logger().set_level(rclcpp::Logger::Level::Debug);

    client_ = this->create_client<bus_msgs::srv::I2cService>("i2c_service");
    direction_subscriber_ = this->create_subscription<std_msgs::msg::UInt8>(
        "direction", 10,
        std::bind(&ServoNode::writeDirectionToI2C, this,
                  std::placeholders::_1));
    RCLCPP_INFO(this->get_logger(), "Starting the Servo node");
}

ServoNode::~ServoNode() {}

/**
 * @brief request to the i2c service a write operation upon receiving a message
 * in the direction topic
 *
 * @param direction
 */
void ServoNode::writeDirectionToI2C(
    const std_msgs::msg::UInt8::SharedPtr direction)
{
    // create the request
    bus_msgs::srv::I2cService::Request::SharedPtr request =
        std::make_shared<bus_msgs::srv::I2cService::Request>();
    ;

    // populate it with the right data
    request->set__device_address(SERVO_ADRESS);
    request->write_data.push_back(direction->data);

    // send it to the i2c interface via the client
    auto response = client_->async_send_request(
        request,
        std::bind(&ServoNode::handleI2CResponse, this, std::placeholders::_1));
}

/**
 * @brief handle the response from the i2c service
 *
 * @param response
 */
void ServoNode::handleI2CResponse(
    rclcpp::Client<bus_msgs::srv::I2cService>::SharedFuture response)
{
    if (response.get()->success)
        RCLCPP_DEBUG(this->get_logger(), "Servo direction updated succefully");
    else
        RCLCPP_ERROR(this->get_logger(), "Failed to update direction: %s",
                     response.get()->error_message.c_str());
}
