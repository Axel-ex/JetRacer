#pragma once

#include "bus_msgs/srv/i2c_service.hpp"
#include "std_msgs/msg/u_int8.hpp"
#include <bus_msgs/srv/i2c_service.hpp>
#include <rclcpp/client.hpp>
#include <rclcpp/rclcpp.hpp>
#include <rclcpp/subscription.hpp>
#include <std_msgs/msg/u_int8.hpp>

#define SERVO_ADRESS 0x8

class ServoNode : public rclcpp::Node
{
    public:
        ServoNode();
        ~ServoNode();

    private:
        rclcpp::Client<bus_msgs::srv::I2cService>::SharedPtr client_;
        rclcpp::Subscription<std_msgs::msg::UInt8>::SharedPtr
            direction_subscriber_;

        void handleI2CResponse(
            rclcpp::Client<bus_msgs::srv::I2cService>::SharedFuture response);
        void
        writeDirectionToI2C(const std_msgs::msg::UInt8::SharedPtr direction);
};
