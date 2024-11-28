#pragma once

#include "bus_msgs/srv/i2c_service.hpp"
#include <bus_msgs/srv/i2c_service.hpp>
#include <cstdint>
#include <memory>
#include <rclcpp/rclcpp.hpp>
#include <rclcpp/service.hpp>
#include <vector>

class I2cInterface : public rclcpp::Node
{
    public:
        I2cInterface();
        ~I2cInterface();

    private:
        int i2c_fd_;
        rclcpp::Service<bus_msgs::srv::I2cService>::SharedPtr i2c_service_;

        void init_();
        int setAddress_(uint8_t address);
        int write_(std::vector<uint8_t>& data);
        std::vector<uint8_t> read_(size_t length);

        void handleI2cRequest(
            const std::shared_ptr<bus_msgs::srv::I2cService::Request> request,
            std::shared_ptr<bus_msgs::srv::I2cService::Response> response);
};
