// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from bus_msgs:msg/CanFrame.idl
// generated code does not contain a copyright notice
#ifndef BUS_MSGS__MSG__DETAIL__CAN_FRAME__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define BUS_MSGS__MSG__DETAIL__CAN_FRAME__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "bus_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "bus_msgs/msg/detail/can_frame__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_bus_msgs
bool cdr_serialize_bus_msgs__msg__CanFrame(
  const bus_msgs__msg__CanFrame * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_bus_msgs
bool cdr_deserialize_bus_msgs__msg__CanFrame(
  eprosima::fastcdr::Cdr &,
  bus_msgs__msg__CanFrame * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_bus_msgs
size_t get_serialized_size_bus_msgs__msg__CanFrame(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_bus_msgs
size_t max_serialized_size_bus_msgs__msg__CanFrame(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_bus_msgs
bool cdr_serialize_key_bus_msgs__msg__CanFrame(
  const bus_msgs__msg__CanFrame * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_bus_msgs
size_t get_serialized_size_key_bus_msgs__msg__CanFrame(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_bus_msgs
size_t max_serialized_size_key_bus_msgs__msg__CanFrame(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_bus_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, bus_msgs, msg, CanFrame)();

#ifdef __cplusplus
}
#endif

#endif  // BUS_MSGS__MSG__DETAIL__CAN_FRAME__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
