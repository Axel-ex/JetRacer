from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node (
            package='i2c_interface',
            namespace='jetracer',
            executable='i2c_interface_node',
            name='i2c_interface'
        ),
        # Node (
        #     package='can_interface',
        #     namespace='jetracer',
        #     executable='can_interface_node',
        #     name='can_interface'
        # ),
        Node (
            package='oled_display',
            namespace='jetracer',
            executable='oled_display_node',
            name='oled_display'
        ),
        Node (
            package='servo_motor',
            namespace='jetracer',
            executable='servo_motor_node',
            name='servo_motor'
        ),
    ])
