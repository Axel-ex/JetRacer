cmake_minimum_required(VERSION 3.8)
project(screen_service)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
# Include directories for the ssd1306 and linux_i2c sources
include_directories(
  include
  ${CMAKE_SOURCE_DIR}/include
)

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)

# Add the executable and link necessary libraries
add_executable(oled_display_node src/main.cpp src/ssd1306_linux/ssd1306.c src/ssd1306_linux/linux_i2c.c)

ament_target_dependencies(oled_display_node rclcpp std_msgs)

# Install target
install(TARGETS oled_display_node DESTINATION lib/${PROJECT_NAME})

ament_export_dependencies(rclcpp std_msgs)
ament_package()

