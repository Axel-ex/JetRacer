#pragma once

#include "CanDriver.hpp"
#include "bus_msgs/msg/can_packet.hpp"
#include <memory>
#include <rclcpp/rclcpp.hpp>
#include <thread>

using sockcanpp::CanDriver;

class CanInterface : public rclcpp::Node
{
    public:
        CanInterface();
        ~CanInterface();

        void pollCanBus();

    private:
        std::shared_ptr<sockcanpp::CanDriver> can_driver_;
        std::thread polling_thread_;
        rclcpp::Publisher<bus_msgs::msg::CanPacket>::SharedPtr publisher_;
};
