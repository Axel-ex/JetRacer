#pragma once

#include "std_msgs/msg/u_int16.hpp"
#include <custom_msgs/srv/i2c_service.hpp>
#include <rclcpp/rclcpp.hpp>

/** default I2C address **/
#define INA219_ADDRESS (0x40) // 1000000 (A0+A1=GND)
/** read **/
#define INA219_READ (0x01)
/** config register address **/
#define INA219_REG_CONFIG (0x00)
/** reset bit **/
#define INA219_CONFIG_RESET (0x8000) // Reset Bit
/** mask for bus voltage range **/
#define INA219_CONFIG_BVOLTAGERANGE_MASK (0x2000) // Bus Voltage Range Mask

/** bus voltage range values **/
enum
{
    INA219_CONFIG_BVOLTAGERANGE_16V = (0x0000), // 0-16V Range
    INA219_CONFIG_BVOLTAGERANGE_32V = (0x2000), // 0-32V Range
};

/** mask for gain bits **/
#define INA219_CONFIG_GAIN_MASK (0x1800) // Gain Mask

/** values for gain bits **/
enum
{
    INA219_CONFIG_GAIN_1_40MV = (0x0000),  // Gain 1, 40mV Range
    INA219_CONFIG_GAIN_2_80MV = (0x0800),  // Gain 2, 80mV Range
    INA219_CONFIG_GAIN_4_160MV = (0x1000), // Gain 4, 160mV Range
    INA219_CONFIG_GAIN_8_320MV = (0x1800), // Gain 8, 320mV Range
};

/** mask for bus ADC resolution bits **/
#define INA219_CONFIG_BADCRES_MASK (0x0780)

/** values for bus ADC resolution **/
enum
{
    INA219_CONFIG_BADCRES_9BIT = (0x0000),  // 9-bit bus res = 0..511
    INA219_CONFIG_BADCRES_10BIT = (0x0080), // 10-bit bus res = 0..1023
    INA219_CONFIG_BADCRES_11BIT = (0x0100), // 11-bit bus res = 0..2047
    INA219_CONFIG_BADCRES_12BIT = (0x0180), // 12-bit bus res = 0..4097
    INA219_CONFIG_BADCRES_12BIT_2S_1060US =
        (0x0480), // 2 x 12-bit bus samples averaged together
    INA219_CONFIG_BADCRES_12BIT_4S_2130US =
        (0x0500), // 4 x 12-bit bus samples averaged together
    INA219_CONFIG_BADCRES_12BIT_8S_4260US =
        (0x0580), // 8 x 12-bit bus samples averaged together
    INA219_CONFIG_BADCRES_12BIT_16S_8510US =
        (0x0600), // 16 x 12-bit bus samples averaged together
    INA219_CONFIG_BADCRES_12BIT_32S_17MS =
        (0x0680), // 32 x 12-bit bus samples averaged together
    INA219_CONFIG_BADCRES_12BIT_64S_34MS =
        (0x0700), // 64 x 12-bit bus samples averaged together
    INA219_CONFIG_BADCRES_12BIT_128S_69MS =
        (0x0780), // 128 x 12-bit bus samples averaged together

};

/** mask for shunt ADC resolution bits **/
#define INA219_CONFIG_SADCRES_MASK                                             \
    (0x0078) // Shunt ADC Resolution and Averaging Mask

/** values for shunt ADC resolution **/
enum
{
    INA219_CONFIG_SADCRES_9BIT_1S_84US = (0x0000),   // 1 x 9-bit shunt sample
    INA219_CONFIG_SADCRES_10BIT_1S_148US = (0x0008), // 1 x 10-bit shunt sample
    INA219_CONFIG_SADCRES_11BIT_1S_276US = (0x0010), // 1 x 11-bit shunt sample
    INA219_CONFIG_SADCRES_12BIT_1S_532US = (0x0018), // 1 x 12-bit shunt sample
    INA219_CONFIG_SADCRES_12BIT_2S_1060US =
        (0x0048), // 2 x 12-bit shunt samples averaged together
    INA219_CONFIG_SADCRES_12BIT_4S_2130US =
        (0x0050), // 4 x 12-bit shunt samples averaged together
    INA219_CONFIG_SADCRES_12BIT_8S_4260US =
        (0x0058), // 8 x 12-bit shunt samples averaged together
    INA219_CONFIG_SADCRES_12BIT_16S_8510US =
        (0x0060), // 16 x 12-bit shunt samples averaged together
    INA219_CONFIG_SADCRES_12BIT_32S_17MS =
        (0x0068), // 32 x 12-bit shunt samples averaged together
    INA219_CONFIG_SADCRES_12BIT_64S_34MS =
        (0x0070), // 64 x 12-bit shunt samples averaged together
    INA219_CONFIG_SADCRES_12BIT_128S_69MS =
        (0x0078), // 128 x 12-bit shunt samples averaged together
};

/** mask for operating mode bits **/
#define INA219_CONFIG_MODE_MASK (0x0007) // Operating Mode Mask

/** values for operating mode **/
enum
{
    INA219_CONFIG_MODE_POWERDOWN = 0x00,       /**< power down */
    INA219_CONFIG_MODE_SVOLT_TRIGGERED = 0x01, /**< shunt voltage triggered */
    INA219_CONFIG_MODE_BVOLT_TRIGGERED = 0x02, /**< bus voltage triggered */
    INA219_CONFIG_MODE_SANDBVOLT_TRIGGERED =
        0x03,                         /**< shunt and bus voltage triggered */
    INA219_CONFIG_MODE_ADCOFF = 0x04, /**< ADC off */
    INA219_CONFIG_MODE_SVOLT_CONTINUOUS = 0x05, /**< shunt voltage continuous */
    INA219_CONFIG_MODE_BVOLT_CONTINUOUS = 0x06, /**< bus voltage continuous */
    INA219_CONFIG_MODE_SANDBVOLT_CONTINUOUS =
        0x07, /**< shunt and bus voltage continuous */
};

/** shunt voltage register **/
#define INA219_REG_SHUNTVOLTAGE (0x01)
/** bus voltage register **/
#define INA219_REG_BUSVOLTAGE (0x02)
/** power register **/
#define INA219_REG_POWER (0x03)
/** current register **/
#define INA219_REG_CURRENT (0x04)
/** calibration register **/
#define INA219_REG_CALIBRATION (0x05)

class INA219Driver
{
    public:
        INA219Driver(std::shared_ptr<rclcpp::Node> node,
                     uint8_t device_address);
        ~INA219Driver() = default;

        // calback alias type for async reads.
        using ReadCallback = std::function<void(std::vector<uint8_t>)>;

        void setRegister(uint8_t reg, uint16_t value);
        void readRegister(uint8_t reg, uint8_t length, ReadCallback callback);

        void handleI2cReadResponse(
            rclcpp::Client<custom_msgs::srv::I2cService>::SharedFuture response,
            uint8_t reg);
        void handleI2cWriteResponse(
            rclcpp::Client<custom_msgs::srv::I2cService>::SharedFuture
                response);
        void publishShuntVoltage();

        void setCalibration_32V_1A();

    private:
        std::shared_ptr<rclcpp::Node> node_;
        rclcpp::Client<custom_msgs::srv::I2cService>::SharedPtr i2c_client_;
        rclcpp::Publisher<std_msgs::msg::UInt16>::SharedPtr publisher_;

        uint8_t device_address_;
        uint32_t current_divider_mA_;
        float power_multiplier_mW_;
        uint32_t calibration_value_;

        // Map of callbacks for tracking responses, maps a register with the
        // response.
        std::unordered_map<uint8_t, ReadCallback> read_callbacks_;
};
