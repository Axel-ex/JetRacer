#pragma once

#include "custom_msgs/srv/i2c_service.hpp"
#include "std_msgs/msg/u_int8.hpp"
#include <custom_msgs/srv/i2c_service.hpp>
#include <rclcpp/client.hpp>
#include <rclcpp/rclcpp.hpp>
#include <rclcpp/subscription.hpp>
#include <std_msgs/msg/u_int8.hpp>

#define SERVO_ADRESS 0x40
#define PRESCALE_REGISTER 0xFE
#define MODE1_REGISTER 0x00
#define CHANNEL_REGISTER 0x06
#define DEFAULT_CHANNEL 0
#define MAX_PW 2250
#define MIN_PW 750

const uint16_t PRESCALE_VALUE = 152; // Hz

class ServoNode : public rclcpp::Node
{
    public:
        ServoNode();
        ~ServoNode();

    private:
        rclcpp::Client<custom_msgs::srv::I2cService>::SharedPtr i2c_client_;
        rclcpp::Subscription<std_msgs::msg::UInt8>::SharedPtr
            direction_subscriber_;

        void asyncI2CResponse(
            rclcpp::Client<custom_msgs::srv::I2cService>::SharedFuture
                response);
        void writeToI2c(const std_msgs::msg::UInt8::SharedPtr direction);

        int init_();
        int setRegister_(uint8_t reg, uint8_t value);
        int setPWM(int channel, int on, int off);
};
