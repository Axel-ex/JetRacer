#pragma once

#include <custom_msgs/srv/i2c_service.hpp>
#include <rclcpp/rclcpp.hpp>

#define PRESCALE_REGISTER 0xFE
#define MODE1_REGISTER 0x00
#define CHANNEL_REGISTER 0x06
#define DEFAULT_CHANNEL 0

class PCA9685Driver
{
    public:
        PCA9685Driver(std::shared_ptr<rclcpp::Node> node,
                      uint8_t device_address);
        ~PCA9685Driver() = default;

        rclcpp::Client<custom_msgs::srv::I2cService>::SharedPtr getI2cClient();
        void setRegister(uint8_t reg, uint8_t value);
        void setPWMFrequency(uint8_t freq_Hz);
        void setPWMDutyCycle(uint8_t channel, uint16_t on, uint16_t off);

        void handleI2cResponse(
            rclcpp::Client<custom_msgs::srv::I2cService>::SharedFuture
                response);

    private:
        std::shared_ptr<rclcpp::Node> node_;
        rclcpp::Client<custom_msgs::srv::I2cService>::SharedPtr i2c_client_;
        uint8_t device_address_;
};
