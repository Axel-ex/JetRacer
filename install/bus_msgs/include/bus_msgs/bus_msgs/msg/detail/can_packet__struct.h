// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bus_msgs:msg/CanPacket.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "bus_msgs/msg/can_packet.h"


#ifndef BUS_MSGS__MSG__DETAIL__CAN_PACKET__STRUCT_H_
#define BUS_MSGS__MSG__DETAIL__CAN_PACKET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/CanPacket in the package bus_msgs.
typedef struct bus_msgs__msg__CanPacket
{
  uint32_t id;
  uint32_t data_len;
  uint8_t data[8];
} bus_msgs__msg__CanPacket;

// Struct for a sequence of bus_msgs__msg__CanPacket.
typedef struct bus_msgs__msg__CanPacket__Sequence
{
  bus_msgs__msg__CanPacket * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bus_msgs__msg__CanPacket__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BUS_MSGS__MSG__DETAIL__CAN_PACKET__STRUCT_H_
