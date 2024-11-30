#pragma once

#include "bus_msgs/srv/i2c_service.hpp"
#include "std_msgs/msg/u_int8.hpp"
#include <bus_msgs/srv/i2c_service.hpp>
#include <rclcpp/client.hpp>
#include <rclcpp/rclcpp.hpp>
#include <rclcpp/subscription.hpp>
#include <std_msgs/msg/u_int8.hpp>

#define SERVO_ADRESS 0x40
#define PRESCALE_REGISTER 0xFE
#define MODE1_REGISTER 0x00
#define CHANNEL_REGISTER 0x06
const uint16_t PRESCALE_VALUE = 152; // Hz

class ServoNode : public rclcpp::Node
{
    public:
        ServoNode();
        ~ServoNode();

    private:
        rclcpp::Client<bus_msgs::srv::I2cService>::SharedPtr i2c_client_;
        rclcpp::Subscription<std_msgs::msg::UInt8>::SharedPtr
            direction_subscriber_;

        void handleI2CResponse(
            rclcpp::Client<bus_msgs::srv::I2cService>::SharedFuture response);
        void
        writeDirectionToI2C(const std_msgs::msg::UInt8::SharedPtr direction);

        int init_();
        int setRegister_(uint8_t reg, uint8_t value);
        int setPWM(int channel, int on, int off);
};
