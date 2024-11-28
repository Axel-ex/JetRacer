#pragma once

#include "bus_msgs/msg/can_packet.hpp"
#include "bus_msgs/srv/i2c_service.hpp"
#include "std_msgs/msg/u_int8.hpp"
#include <bus_msgs/srv/i2c_service.hpp>
#include <rclcpp/client.hpp>
#include <rclcpp/publisher.hpp>
#include <rclcpp/rclcpp.hpp>
#include <rclcpp/subscription.hpp>
#include <std_msgs/msg/u_int8.hpp>

#define SPEED_SENSOR_ID 0x00

class SpeedSensorNode : public rclcpp::Node
{
    public:
        SpeedSensorNode();
        ~SpeedSensorNode();

    private:
        rclcpp::Subscription<bus_msgs::msg::CanPacket>::SharedPtr
            raw_can_subscriber_;
        rclcpp::Publisher<std_msgs::msg::UInt8>::SharedPtr speed_publisher_;

        void writeSpeed(const bus_msgs::msg::CanPacket::SharedPtr can_frame);
};
