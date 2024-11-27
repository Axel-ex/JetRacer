#include "CanMessage.hpp"
#include "bus_msgs/msg/can_packet.hpp"
#include <CanDriver.hpp>
#include <algorithm>
#include <chrono>
#include <linux/can.h>
#include <memory>
#include <rclcpp/logging.hpp>
#include <rclcpp/publisher.hpp>
#include <rclcpp/qos.hpp>
#include <rclcpp/rclcpp.hpp>
#include <rclcpp/utilities.hpp>
#include <thread>

using sockcanpp::CanDriver;
using sockcanpp::CanMessage;

class CanInterface : public rclcpp::Node
{
    public:
        CanInterface() : Node("can_interface")
        {
            // Initialize Can driver
            can_driver_ = std::make_shared<CanDriver>("can0", CAN_RAW);
            publisher_ =
                this->create_publisher<bus_msgs::msg::CanPacket>("raw_CAN", 10);
            polling_thread_ = std::thread(&CanInterface::pollCanBus, this);

            RCLCPP_INFO(this->get_logger(), "Starting to listen on can0");
        }

        ~CanInterface()
        {
            if (polling_thread_.joinable())
                polling_thread_.join();
        }

    private:
        std::shared_ptr<CanDriver> can_driver_;
        std::thread polling_thread_;
        rclcpp::Publisher<bus_msgs::msg::CanPacket>::SharedPtr publisher_;

        void pollCanBus(void)
        {
            while (rclcpp::ok())
            {
                if (can_driver_->waitForMessages(std::chrono::milliseconds(10)))
                {
                    bus_msgs::msg::CanPacket ros_msg;

                    CanMessage received_msg = can_driver_->readMessage();
                    ros_msg.set__id(received_msg.getCanId());
                    ros_msg.set__data_len(received_msg.getFrameData().size());
                    std::copy_n(received_msg.getFrameData().begin(),
                                ros_msg.data_len, ros_msg.data.begin());

                    RCLCPP_INFO(this->get_logger(),
                                "Published CAN frame: ID=0x%X, LEN=%d",
                                ros_msg.id, ros_msg.data_len);
                }
            }
        }
};

int main(int argc, char** argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<CanInterface>());
    rclcpp::shutdown();
    return 0;
}
