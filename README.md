# Suggestion for the project structure

```
piracer/
├── src/
│   ├── bus_interfaces/
│   │   ├── can_interface/
│   │   │   ├── CMakeLists.txt
│   │   │   ├── package.xml
│   │   │   ├── src/
│   │   │   └── include/
│   │   ├── i2c_interface/
│   │       ├── CMakeLists.txt
│   │       ├── package.xml
│   │       ├── src/
│   │       └── include/
│   ├── peripherals/
│   │   ├── oled_display/
│   │   │   ├── CMakeLists.txt
│   │   │   ├── package.xml
│   │   │   ├── src/
│   │   │   └── include/
│   │   ├── servo/
│   │   │   ├── CMakeLists.txt
│   │   │   ├── package.xml
│   │   │   ├── src/
│   │   │   └── include/
│   │   ├── dc_motors/
│   │       ├── CMakeLists.txt
│   │       ├── package.xml
│   │       ├── src/
│   │       └── include/
│   ├── head_unit/
│   │   ├── coordinator/
│   │   │   ├── CMakeLists.txt
│   │   │   ├── package.xml
│   │   │   ├── src/
│   │   │   └── include/
│   │   ├── infotainment/
│   │       ├── CMakeLists.txt
│   │       ├── package.xml
│   │       ├── src/
│   │       └── include/
├── CMakeLists.txt
└── colcon.meta
```
Each package represent a ROS node which is essentialy an executable encapsulating a single an aspect of the system. the project is divided into three main directories which basically represent 3 layers.

### Modularity and Separation of Concerns

Bus Interfaces (can_interface, i2c_interface):
These packages abstract hardware interfaces, making the design flexible and scalable.
Peripherals (oled_display, servo, dc_motors):
Each node handle device-specific logic, making debugging and testing easier.
They depend on the bus interface packages, which maintain a clear dependency hierarchy.
Head Unit (coordinator, infotainment):
high-level functionality (e.g., coordination, user interaction with remote).

# Build

```
cd piracer
colcon build --symlink-install
```
