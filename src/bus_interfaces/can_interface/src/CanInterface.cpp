#include "CanInterface.hpp"
#include "CanMessage.hpp"
#include "bus_msgs/msg/can_packet.hpp"
#include <chrono>
#include <linux/can.h>
#include <memory>
#include <rclcpp/logger.hpp>
#include <rclcpp/logging.hpp>
#include <rclcpp/utilities.hpp>
#include <thread>

using sockcanpp::CanMessage;

CanInterface::CanInterface() : Node("can_interface")
{
    this->get_logger().set_level(rclcpp::Logger::Level::Debug);

    can_driver_ = std::make_shared<CanDriver>("can0", CAN_RAW);
    publisher_ =
        this->create_publisher<bus_msgs::msg::CanPacket>("raw_CAN", 10);
    polling_thread_ = std::thread(&CanInterface::pollCanBus, this);

    RCLCPP_INFO(this->get_logger(), "Starting CAN bus interface");
}

CanInterface::~CanInterface()
{
    if (polling_thread_.joinable())
        polling_thread_.join();
}

void CanInterface::pollCanBus()
{
    while (rclcpp::ok())
    {
        if (can_driver_->waitForMessages(std::chrono::milliseconds(10)))
        {
            bus_msgs::msg::CanPacket ros_msg;

            CanMessage received_msg = can_driver_->readMessage();
            ros_msg.set__id(received_msg.getCanId());
            ros_msg.set__data_len(received_msg.getFrameData().length());
            std::copy_n(received_msg.getFrameData().begin(), ros_msg.data_len,
                        ros_msg.data.begin());

            RCLCPP_DEBUG(this->get_logger(),
                         "Received CAN frame: ID=0x%X, LEN=%d", ros_msg.id,
                         ros_msg.data_len);

            publisher_->publish(ros_msg);
        }
    }
}
