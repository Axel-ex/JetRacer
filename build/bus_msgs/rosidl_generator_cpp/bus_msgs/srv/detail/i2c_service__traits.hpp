// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bus_msgs:srv/I2cService.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "bus_msgs/srv/i2c_service.hpp"


#ifndef BUS_MSGS__SRV__DETAIL__I2C_SERVICE__TRAITS_HPP_
#define BUS_MSGS__SRV__DETAIL__I2C_SERVICE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bus_msgs/srv/detail/i2c_service__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bus_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const I2cService_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: device_address
  {
    out << "device_address: ";
    rosidl_generator_traits::value_to_yaml(msg.device_address, out);
    out << ", ";
  }

  // member: write_data
  {
    if (msg.write_data.size() == 0) {
      out << "write_data: []";
    } else {
      out << "write_data: [";
      size_t pending_items = msg.write_data.size();
      for (auto item : msg.write_data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: read_request
  {
    out << "read_request: ";
    rosidl_generator_traits::value_to_yaml(msg.read_request, out);
    out << ", ";
  }

  // member: read_length
  {
    out << "read_length: ";
    rosidl_generator_traits::value_to_yaml(msg.read_length, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const I2cService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: device_address
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "device_address: ";
    rosidl_generator_traits::value_to_yaml(msg.device_address, out);
    out << "\n";
  }

  // member: write_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.write_data.size() == 0) {
      out << "write_data: []\n";
    } else {
      out << "write_data:\n";
      for (auto item : msg.write_data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: read_request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "read_request: ";
    rosidl_generator_traits::value_to_yaml(msg.read_request, out);
    out << "\n";
  }

  // member: read_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "read_length: ";
    rosidl_generator_traits::value_to_yaml(msg.read_length, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const I2cService_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace bus_msgs

namespace rosidl_generator_traits
{

[[deprecated("use bus_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const bus_msgs::srv::I2cService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  bus_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bus_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const bus_msgs::srv::I2cService_Request & msg)
{
  return bus_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<bus_msgs::srv::I2cService_Request>()
{
  return "bus_msgs::srv::I2cService_Request";
}

template<>
inline const char * name<bus_msgs::srv::I2cService_Request>()
{
  return "bus_msgs/srv/I2cService_Request";
}

template<>
struct has_fixed_size<bus_msgs::srv::I2cService_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bus_msgs::srv::I2cService_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bus_msgs::srv::I2cService_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace bus_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const I2cService_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: read_data
  {
    if (msg.read_data.size() == 0) {
      out << "read_data: []";
    } else {
      out << "read_data: [";
      size_t pending_items = msg.read_data.size();
      for (auto item : msg.read_data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const I2cService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: read_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.read_data.size() == 0) {
      out << "read_data: []\n";
    } else {
      out << "read_data:\n";
      for (auto item : msg.read_data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const I2cService_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace bus_msgs

namespace rosidl_generator_traits
{

[[deprecated("use bus_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const bus_msgs::srv::I2cService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  bus_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bus_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const bus_msgs::srv::I2cService_Response & msg)
{
  return bus_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<bus_msgs::srv::I2cService_Response>()
{
  return "bus_msgs::srv::I2cService_Response";
}

template<>
inline const char * name<bus_msgs::srv::I2cService_Response>()
{
  return "bus_msgs/srv/I2cService_Response";
}

template<>
struct has_fixed_size<bus_msgs::srv::I2cService_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bus_msgs::srv::I2cService_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bus_msgs::srv::I2cService_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace bus_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const I2cService_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const I2cService_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const I2cService_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace bus_msgs

namespace rosidl_generator_traits
{

[[deprecated("use bus_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const bus_msgs::srv::I2cService_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  bus_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bus_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const bus_msgs::srv::I2cService_Event & msg)
{
  return bus_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<bus_msgs::srv::I2cService_Event>()
{
  return "bus_msgs::srv::I2cService_Event";
}

template<>
inline const char * name<bus_msgs::srv::I2cService_Event>()
{
  return "bus_msgs/srv/I2cService_Event";
}

template<>
struct has_fixed_size<bus_msgs::srv::I2cService_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bus_msgs::srv::I2cService_Event>
  : std::integral_constant<bool, has_bounded_size<bus_msgs::srv::I2cService_Request>::value && has_bounded_size<bus_msgs::srv::I2cService_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<bus_msgs::srv::I2cService_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<bus_msgs::srv::I2cService>()
{
  return "bus_msgs::srv::I2cService";
}

template<>
inline const char * name<bus_msgs::srv::I2cService>()
{
  return "bus_msgs/srv/I2cService";
}

template<>
struct has_fixed_size<bus_msgs::srv::I2cService>
  : std::integral_constant<
    bool,
    has_fixed_size<bus_msgs::srv::I2cService_Request>::value &&
    has_fixed_size<bus_msgs::srv::I2cService_Response>::value
  >
{
};

template<>
struct has_bounded_size<bus_msgs::srv::I2cService>
  : std::integral_constant<
    bool,
    has_bounded_size<bus_msgs::srv::I2cService_Request>::value &&
    has_bounded_size<bus_msgs::srv::I2cService_Response>::value
  >
{
};

template<>
struct is_service<bus_msgs::srv::I2cService>
  : std::true_type
{
};

template<>
struct is_service_request<bus_msgs::srv::I2cService_Request>
  : std::true_type
{
};

template<>
struct is_service_response<bus_msgs::srv::I2cService_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BUS_MSGS__SRV__DETAIL__I2C_SERVICE__TRAITS_HPP_