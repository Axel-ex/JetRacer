# INA219 ROS2 Driver

This repository contains a ROS2 driver for interfacing with the INA219 sensor, which provides voltage, current, and power measurements over an I2C interface. The driver uses asynchronous communication and follows a modular structure to ensure scalability and maintainability.

---

## Code Structure

### **Classes and Key Components**
1. **`INA219Driver`**  
   The core driver class responsible for interacting with the INA219 sensor via I2C. It abstracts the functionality to configure the sensor, read data, and publish results.
   - **Key Methods:**
     - `setCalibration_32V_1A()`: Configures the INA219 for a specific voltage and current range (32V, 1A).
     - `writeRegister()`: Writes a 16-bit value to a specific register of the INA219.
     - `readRegister()`: Reads data from a specified register. Uses a callback registry pattern for asynchronous handling.
     - `publishBusVoltage()`: Reads and publishes the bus voltage to a ROS2 topic.

2. **Callback Registry Pattern**  
   This pattern is used to handle asynchronous read operations. Callbacks associated with specific registers are stored in a map and invoked when the corresponding data is received.

3. **ROS2 Interfaces**  
   - **Service Client**:  
     The `custom_msgs::srv::I2cService` is used to send I2C commands to the INA219 sensor.
   - **Publisher**:  
     The `battery_readings` topic is used to publish voltage measurements (`std_msgs::msg::Float64`).

---

### **Code Flow**
1. **Initialization**  
   The `INA219Driver` is initialized with:
   - A shared pointer to the ROS2 node.
   - The I2C device address of the INA219 sensor.

   During initialization:
   - An I2C service client (`i2c_client_`) is created to send I2C requests.
   - A publisher (`publisher_`) is initialized for publishing sensor readings.

2. **Calibration**  
   `setCalibration_32V_1A()` configures the INA219 for a voltage range of 32V and a current range of 1A. This includes:
   - Setting calibration values.
   - Writing configuration values to the INA219.

3. **Reading Data**  
   - `readRegister()` sends a read request to a specific INA219 register. The response is handled asynchronously via callbacks.
   - A callback is registered for the requested register and invoked when the read operation completes.

4. **Publishing Data**  
   - `publishBusVoltage()` reads the bus voltage from the INA219 and publishes it to the `battery_readings` topic.

---

## Topics and Services

- **Published Topics**:
  - `/battery_readings`: Publishes the bus voltage as a `std_msgs::msg::Float64` message.

- **Required Services**:
  - `/i2c_service`: Custom service (`custom_msgs::srv::I2cService`) used for I2C communication with the INA219.

---

## Future Improvements

To extend the driver for additional functionality (e.g., reading current or power values):

1. **Add Calibration Configurations**  
   Create new calibration methods (e.g., `setCalibration_32V_3A()`) to configure the INA219 for different ranges.

2. **Implement New Read Operations**  
   - Define methods similar to `publishBusVoltage()` to read other sensor parameters like current or power.
   - Use `readRegister()` with appropriate INA219 register addresses.

3. **Publish New Topics**  
   - Create new ROS2 publishers for current and power measurements.
   - Ensure the messages are appropriately formatted (`std_msgs::msg::Float64` or other types).

---

