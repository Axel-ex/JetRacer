#pragma once

#include <bus_msgs/srv/i2c_service.hpp>
#include <cstdint>
#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>

class OledDisplayNode : public rclcpp::Node
{
    public:
        OledDisplayNode();
        ~OledDisplayNode();

    private:
        rclcpp::Client<bus_msgs::srv::I2cService>::SharedPtr i2c_client_;
        rclcpp::Subscription<std_msgs::msg::String>::SharedPtr
            display_subscriber_;

        void writeToI2c(const std_msgs::msg::String::SharedPtr msg);
        int waitForResponse(
            rclcpp::Client<bus_msgs::srv::I2cService>::SharedFuture future,
            const std::string& operation);

        // display interface
        int initDisplay();
        int setDefaultConfig();
        int onOffDisplay();

        // TODO: int setXY(uint8_t x, uint8_t y);
        // int writeString(uint8_t size, const std::string &msg);
        // int clearRow(uint8_t row);
        // int clearScreen();
};
