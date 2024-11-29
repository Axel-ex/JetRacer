#include "../include/ssd1306.h" // Include the ssd1306 header
#include "std_msgs/msg/string.hpp"
#include <cstdint>
#include <rclcpp/logging.hpp>
#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>

using namespace std::chrono_literals;

class OLEDDisplayNode : public rclcpp::Node
{
    public:
        OLEDDisplayNode() : Node("oled_display_node")
        {
            // Initialize the OLED display
            uint8_t rc = ssd1306_init(1); // Initialize OLED on I2C node 1
            if (rc != 0)
            {
                RCLCPP_ERROR(this->get_logger(),
                             "Failed to initialize OLED display");
                return;
            }

            rc = ssd1306_oled_default_config(32, 128);
            if (rc != 0)
            {
                RCLCPP_ERROR(this->get_logger(),
                             "Failed to configure OLED display");
                return;
            }

            // Create a timer that updates the OLED display
            timer_ = this->create_wall_timer(
                1s, std::bind(&OLEDDisplayNode::update_display, this));

            // Subscribe to the topic we will use to send informations to screen
            _subscriber = this->create_subscription<std_msgs::msg::String>(
                "display", 10,
                [this](const std_msgs::msg::String::SharedPtr msg)
                { this->displayCallback(msg); });
        }

    private:
        rclcpp::Subscription<std_msgs::msg::String>::SharedPtr _subscriber;

        void update_display()
        {
            // Clear the display
            uint8_t rc = ssd1306_oled_clear_screen();
            if (rc != 0)
            {
                RCLCPP_ERROR(this->get_logger(),
                             "Failed to clear OLED display");
                return;
            }

            // Write text to the OLED display
            rc = ssd1306_oled_set_X(2);
            if (rc != 0)
            {
                RCLCPP_ERROR(this->get_logger(), "Failed to set cursor");
                return;
            }
            rc = ssd1306_oled_write_string(0x01, "Hello, ROS 2!");
            if (rc != 0)
            {
                RCLCPP_ERROR(this->get_logger(),
                             "Failed to write string to OLED display");
                return;
            }

            // Optional: Rotate or adjust other settings
            rc = ssd1306_oled_set_rotate(180); // Rotate display by 180
            if (rc != 0)
            {
                RCLCPP_ERROR(this->get_logger(),
                             "Failed to rotate OLED display");
            }
        }

        void displayCallback(const std_msgs::msg::String::SharedPtr msg)
        {
            // Clear the display
            uint8_t rc = ssd1306_oled_clear_screen();
            if (rc != 0)
            {
                RCLCPP_ERROR(this->get_logger(),
                             "Failed to clear OLED display");
                return;
            }

            // Write text to the OLED display
            rc = ssd1306_oled_set_X(2);
            if (rc != 0)
            {
                RCLCPP_ERROR(this->get_logger(), "Failed to set cursor");
                return;
            }

            std::string msg_str = msg->data;
            rc = ssd1306_oled_write_string(0x01, msg_str.c_str());
            if (rc != 0)
            {
                RCLCPP_ERROR(this->get_logger(),
                             "Failed to write string to OLED display");
                return;
            }

            // Optional: Rotate or adjust other settings
            rc = ssd1306_oled_set_rotate(180); // Rotate display by 180 degrees
            if (rc != 0)
            {
                RCLCPP_ERROR(this->get_logger(),
                             "Failed to rotate OLED display");
            }
        }

        rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char** argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<OLEDDisplayNode>());
    rclcpp::shutdown();
    return 0;
}
