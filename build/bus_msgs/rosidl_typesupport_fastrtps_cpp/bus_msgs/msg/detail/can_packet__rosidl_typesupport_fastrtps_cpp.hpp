// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from bus_msgs:msg/CanPacket.idl
// generated code does not contain a copyright notice

#ifndef BUS_MSGS__MSG__DETAIL__CAN_PACKET__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define BUS_MSGS__MSG__DETAIL__CAN_PACKET__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "bus_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "bus_msgs/msg/detail/can_packet__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace bus_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bus_msgs
cdr_serialize(
  const bus_msgs::msg::CanPacket & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bus_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  bus_msgs::msg::CanPacket & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bus_msgs
get_serialized_size(
  const bus_msgs::msg::CanPacket & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bus_msgs
max_serialized_size_CanPacket(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bus_msgs
cdr_serialize_key(
  const bus_msgs::msg::CanPacket & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bus_msgs
get_serialized_size_key(
  const bus_msgs::msg::CanPacket & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bus_msgs
max_serialized_size_key_CanPacket(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace bus_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bus_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, bus_msgs, msg, CanPacket)();

#ifdef __cplusplus
}
#endif

#endif  // BUS_MSGS__MSG__DETAIL__CAN_PACKET__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
