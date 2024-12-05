#include "INA219Driver.hpp"

using namespace std::chrono_literals;

INA219Driver::INA219Driver(std::shared_ptr<rclcpp::Node> node,
                           uint8_t device_address)
    : node_(node), device_address_(device_address), current_divider_mA_(0),
      power_multiplier_mW_(0), calibration_value_(0)
{
    i2c_client_ =
        node_->create_client<custom_msgs::srv::I2cService>("i2c_service");
    publisher_ =
        node_->create_publisher<std_msgs::msg::UInt16>("battery_readings", 10);

    RCLCPP_INFO(node->get_logger(), "INA219 succefully initiated");
}

/**
 * @brief set callibration value according to the range of voltage expected. To
 * see more about how the value is obtained, refer to:
 * https://github.com/adafruit/Adafruit_INA219/blob/master/Adafruit_INA219.cpp
 */
void INA219Driver::setCalibration_32V_1A()
{
    calibration_value_ = 10240;

    // Set multipliers to convert raw current / power
    current_divider_mA_ = 25;
    power_multiplier_mW_ = 0.8f;

    // Set calibration register
    setRegister(INA219_REG_CALIBRATION, calibration_value_);

    // Set Config register to take into account the settings above
    uint16_t config = INA219_CONFIG_BVOLTAGERANGE_32V |
                      INA219_CONFIG_GAIN_8_320MV | INA219_CONFIG_BADCRES_12BIT |
                      INA219_CONFIG_SADCRES_12BIT_1S_532US |
                      INA219_CONFIG_MODE_SANDBVOLT_CONTINUOUS;

    setRegister(INA219_REG_CONFIG, config);
}

void INA219Driver::setRegister(uint8_t reg, uint16_t value)
{
    auto request = std::make_shared<custom_msgs::srv::I2cService::Request>();

    request->set__device_address(INA219_ADDRESS);
    request->set__read_request(false);
    request->write_data.push_back(reg);
    request->write_data.push_back((value >> 4) & 0xFF);
    request->write_data.push_back(value & 0xFF);

    i2c_client_->async_send_request(
        request, std::bind(&INA219Driver::handleI2cWriteResponse, this,
                           std::placeholders::_1));
}

void INA219Driver::readRegister(uint8_t reg, uint8_t length,
                                ReadCallback callback)
{
    auto request = std::make_shared<custom_msgs::srv::I2cService::Request>();

    request->set__device_address(INA219_ADDRESS);
    request->set__read_request(true);
    request->set__read_length(length);

    // store the callback
    read_callbacks_[reg] = callback;

    i2c_client_->async_send_request(
        request,
        [this, reg](
            rclcpp::Client<custom_msgs::srv::I2cService>::SharedFuture response)
        { this->handleI2cReadResponse(response, reg); });
}

void INA219Driver::handleI2cReadResponse(
    rclcpp::Client<custom_msgs::srv::I2cService>::SharedFuture response,
    uint8_t reg)
{
    auto result = response.get();

    if (!result->success)
    {
        RCLCPP_ERROR(node_->get_logger(), "I2C read fail for register 0x%02X",
                     reg);
        return;
    }

    // Retrieve the callback for this register
    auto callback_iter = read_callbacks_.find(reg);
    if (callback_iter != read_callbacks_.end())
    {
        auto callback = callback_iter->second;
        callback(result->read_data); // Invoke the callback with the data
        read_callbacks_.erase(callback_iter); // Clean up
    }
    else
    {
        RCLCPP_WARN(node_->get_logger(),
                    "No callback registered for register 0x%02X", reg);
    }
}

void INA219Driver::handleI2cWriteResponse(
    rclcpp::Client<custom_msgs::srv::I2cService>::SharedFuture response)
{
    auto result = response.get();

    if (!result->success)
    {
        RCLCPP_ERROR(node_->get_logger(), "FAILURE: %s",
                     result->message.c_str());
        return;
    }
}

void INA219Driver::publishShuntVoltage()
{
    readRegister(INA219_REG_SHUNTVOLTAGE, 2,
                 [this](std::vector<uint8_t> data)
                 {
                     uint16_t value = (data[0] << 8) | data[1];
                     RCLCPP_INFO(rclcpp::get_logger("INA219"),
                                 "Read value: 0x%04X", value);

                     auto msg = std_msgs::msg::UInt16();
                     msg.set__data(value);
                     this->publisher_->publish(msg);
                 });
}
