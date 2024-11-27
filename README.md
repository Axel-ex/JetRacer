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

# Build

```
cd piracer
colcon build --symlink-install
```
