// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bus_msgs:msg/CanPacket.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "bus_msgs/msg/can_packet.hpp"


#ifndef BUS_MSGS__MSG__DETAIL__CAN_PACKET__TRAITS_HPP_
#define BUS_MSGS__MSG__DETAIL__CAN_PACKET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bus_msgs/msg/detail/can_packet__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bus_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CanPacket & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: data_len
  {
    out << "data_len: ";
    rosidl_generator_traits::value_to_yaml(msg.data_len, out);
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const CanPacket & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: data_len
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data_len: ";
    rosidl_generator_traits::value_to_yaml(msg.data_len, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CanPacket & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace bus_msgs

namespace rosidl_generator_traits
{

[[deprecated("use bus_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const bus_msgs::msg::CanPacket & msg,
  std::ostream & out, size_t indentation = 0)
{
  bus_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bus_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bus_msgs::msg::CanPacket & msg)
{
  return bus_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bus_msgs::msg::CanPacket>()
{
  return "bus_msgs::msg::CanPacket";
}

template<>
inline const char * name<bus_msgs::msg::CanPacket>()
{
  return "bus_msgs/msg/CanPacket";
}

template<>
struct has_fixed_size<bus_msgs::msg::CanPacket>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bus_msgs::msg::CanPacket>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bus_msgs::msg::CanPacket>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BUS_MSGS__MSG__DETAIL__CAN_PACKET__TRAITS_HPP_
