#include "OledDisplayNode.hpp"
#include "ssd1306.h"

using namespace std::chrono_literals;

OledDisplayNode::OledDisplayNode() : rclcpp::Node("oled_display")
{
    this->get_logger().set_level(rclcpp::Logger::Level::Debug);

    i2c_client_ = this->create_client<bus_msgs::srv::I2cService>("i2c_service");
    display_subscriber_ = this->create_subscription<std_msgs::msg::String>(
        "display", 10,
        std::bind(&OledDisplayNode::writeToI2c, this, std::placeholders::_1));

    while (!i2c_client_->wait_for_service(500ms))
        continue;

    if (initDisplay() != EXIT_SUCCESS && setDefaultConfig() != EXIT_SUCCESS)
        return;
    RCLCPP_INFO(this->get_logger(), "Starting oled display");
}

OledDisplayNode::~OledDisplayNode() {}

void OledDisplayNode::writeToI2c(const std_msgs::msg::String::SharedPtr msg)
{
    bus_msgs::srv::I2cService::Request::SharedPtr request =
        std::make_shared<bus_msgs::srv::I2cService::Request>();

    // check the coontent of the topic and display the appropriated menu
}

/**
 * @brief wait for the response of the i2c service by blocking since the
 * sequence of writes to the screen is important.
 *
 * @param future
 * @param operation
 * @return
 */
int OledDisplayNode::waitForResponse(
    rclcpp::Client<bus_msgs::srv::I2cService>::SharedFuture future,
    const std::string& operation)
{
    auto status = rclcpp::spin_until_future_complete(
        this->get_node_base_interface(), future, 2s);

    if (status == rclcpp::FutureReturnCode::SUCCESS)
    {
        auto response = future.get();
        if (!response->success)
        {
            RCLCPP_ERROR(this->get_logger(), "FAILURE: %s: %s",
                         operation.c_str(), response->message.c_str());
            return EXIT_FAILURE;
        }
        RCLCPP_DEBUG(this->get_logger(), "SUCCESS: %s", operation.c_str());
        return EXIT_SUCCESS;
    }
    else if (status == rclcpp::FutureReturnCode::TIMEOUT)
    {
        RCLCPP_ERROR(this->get_logger(), "TIMEOUT: %s", operation.c_str());
        return EXIT_FAILURE;
    }
    else
    {
        RCLCPP_ERROR(this->get_logger(), "UNKNOWN ERROR: %s",
                     operation.c_str());
        return EXIT_FAILURE;
    }
}

// DISPLAY INTERFACE
// When requesting to the i2c interface, we either block until receiving a
// response (for critical operation like init the display) or we can handle the
// response asynchronously to avoid blocking the thread.

/**
 * @brief try to read and write
 *
 * @return
 */
int OledDisplayNode::initDisplay()
{
    bus_msgs::srv::I2cService::Request::SharedPtr write_request =
        std::make_shared<bus_msgs::srv::I2cService::Request>();
    bus_msgs::srv::I2cService::Request::SharedPtr read_request =
        std::make_shared<bus_msgs::srv::I2cService::Request>();

    write_request->set__read_request(false);
    write_request->set__device_address(SSD1306_I2C_ADDR);
    write_request->write_data.push_back(SSD1306_COMM_CONTROL_BYTE);

    read_request->set__read_request(true);
    read_request->set__device_address(SSD1306_I2C_ADDR);
    read_request->set__read_length(1);

    auto future_write =
        i2c_client_->async_send_request(write_request).future.share();
    auto future_read =
        i2c_client_->async_send_request(read_request).future.share();

    // Try to write and read.
    int write_result = waitForResponse(future_write, "Init display write");
    int read_result = waitForResponse(future_read, "Init display read");

    return write_result == EXIT_SUCCESS && read_result == EXIT_SUCCESS
               ? EXIT_SUCCESS
               : EXIT_FAILURE;
}

int OledDisplayNode::onOffDisplay()
{
    bus_msgs::srv::I2cService::Request::SharedPtr request =
        std::make_shared<bus_msgs::srv::I2cService::Request>();

    request->set__read_request(false);
    request->set__device_address(SSD1306_I2C_ADDR);
    request->write_data.push_back(SSD1306_COMM_CONTROL_BYTE);
    if (!display_on_)
    {
        request->write_data.push_back(SSD1306_COMM_DISPLAY_ON);
        display_on_ = true;
    }
    else
    {
        request->write_data.push_back(SSD1306_COMM_DISPLAY_OFF);
        display_on_ = false;
    }

    auto future = i2c_client_->async_send_request(request).future.share();
    return waitForResponse(future, "Display on off");
}

int OledDisplayNode::setDefaultConfig()
{
    bus_msgs::srv::I2cService::Request::SharedPtr request =
        std::make_shared<bus_msgs::srv::I2cService::Request>();

    request->set__read_request(false);
    request->set__device_address(SSD1306_I2C_ADDR);

    request->write_data.push_back(SSD1306_COMM_CONTROL_BYTE); // ctrl byte
    request->write_data.push_back(SSD1306_COMM_DISPLAY_OFF);  // display on
    request->write_data.push_back(SSD1306_COMM_DISP_NORM);    // normal display
    request->write_data.push_back(SSD1306_COMM_CLK_SET);      // set clock div
    request->write_data.push_back(SSD1306_SCREEN_RATIO);      // ratio 0x80
    request->write_data.push_back(SSD1306_COMM_MULTIPLEX);    // set multiplex
    request->write_data.push_back(SSD1306_HEIGHT - 1);
    request->write_data.push_back(SSD1306_COMM_VERT_OFFSET); // offset
    request->write_data.push_back(0); // no horizontal offset
    request->write_data.push_back(SSD1306_COMM_START_LINE);
    request->write_data.push_back(SSD1306_COMM_CHARGE_PUMP);
    request->write_data.push_back(0x14); // turn on charge pump
    request->write_data.push_back(SSD1306_COMM_MEMORY_MODE);
    request->write_data.push_back(SSD1306_PAGE_MODE);
    request->write_data.push_back(SSD1306_COMM_HORIZ_NORM);
    request->write_data.push_back(SSD1306_COMM_SCAN_NORM);
    request->write_data.push_back(SSD1306_COMM_COM_PIN);
    request->write_data.push_back(0x02); // for display with 32 lines
    request->write_data.push_back(SSD1306_COMM_CONTRAST);
    request->write_data.push_back(0x7f); // default contrast value
    request->write_data.push_back(SSD1306_COMM_PRECHARGE);
    request->write_data.push_back(0xf1); // default precharge value
    request->write_data.push_back(SSD1306_COMM_DESELECT_LV);
    request->write_data.push_back(0x40); // default deselct val
    request->write_data.push_back(SSD1306_COMM_RESUME_RAM);
    request->write_data.push_back(SSD1306_COMM_DISP_NORM);
    request->write_data.push_back(SSD1306_COMM_DISPLAY_ON);
    request->write_data.push_back(SSD1306_COMM_DISABLE_SCROLL);

    display_on_ = true;
    auto future = i2c_client_->async_send_request(request).future.share();
    return waitForResponse(future, "set default config");
}
