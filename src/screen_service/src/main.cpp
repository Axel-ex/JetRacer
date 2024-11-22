#include "rclcpp/rclcpp.hpp"
#include <memory>
#include <rclcpp/logging.hpp>
#include <rclcpp/node.hpp>

class MinimalNode : public rclcpp::Node
{
    public:
        MinimalNode() : Node("minimal_node")
        {
            RCLCPP_INFO(this->get_logger(), "hello from minimal node!");
        }
};

int main(int argc, char** argv)
{
    rclcpp::init(argc, argv);

    auto node = std::make_shared<MinimalNode>();

    rclcpp::spin(node);
    rclcpp::shutdown();

    return 0;
}
