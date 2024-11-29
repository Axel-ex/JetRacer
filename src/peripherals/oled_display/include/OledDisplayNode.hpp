#pragma once

#include <bus_msgs/srv/i2c_service.hpp>
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
        bool display_on_ = false;

        void writeToI2c(const std_msgs::msg::String::SharedPtr msg);
        void handleI2cResponse(
            rclcpp::Client<bus_msgs::srv::I2cService>::SharedFuture response);

        // Helper
        int waitForFuture(
            rclcpp::Client<bus_msgs::srv::I2cService>::SharedFuture future,
            const std::string& operation);

        // display interface
        int initDisplay();
        int setDefaultConfig();
        int onOffDisplay();
};
