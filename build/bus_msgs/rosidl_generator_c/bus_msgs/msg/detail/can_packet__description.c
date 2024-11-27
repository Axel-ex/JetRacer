// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from bus_msgs:msg/CanPacket.idl
// generated code does not contain a copyright notice

#include "bus_msgs/msg/detail/can_packet__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_bus_msgs
const rosidl_type_hash_t *
bus_msgs__msg__CanPacket__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2b, 0x42, 0x4b, 0xfa, 0xe4, 0x84, 0xf7, 0x15,
      0x88, 0x09, 0xbc, 0x5a, 0xb9, 0xba, 0xb8, 0xb6,
      0x22, 0xed, 0xb2, 0x9d, 0xb2, 0xb1, 0x81, 0x25,
      0x2c, 0xde, 0x2a, 0x35, 0xfa, 0xab, 0x2f, 0x7d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char bus_msgs__msg__CanPacket__TYPE_NAME[] = "bus_msgs/msg/CanPacket";

// Define type names, field names, and default values
static char bus_msgs__msg__CanPacket__FIELD_NAME__id[] = "id";
static char bus_msgs__msg__CanPacket__FIELD_NAME__data_len[] = "data_len";
static char bus_msgs__msg__CanPacket__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field bus_msgs__msg__CanPacket__FIELDS[] = {
  {
    {bus_msgs__msg__CanPacket__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {bus_msgs__msg__CanPacket__FIELD_NAME__data_len, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {bus_msgs__msg__CanPacket__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      8,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
bus_msgs__msg__CanPacket__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {bus_msgs__msg__CanPacket__TYPE_NAME, 22, 22},
      {bus_msgs__msg__CanPacket__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint32 id\n"
  "uint32 data_len\n"
  "uint8[8] data";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
bus_msgs__msg__CanPacket__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {bus_msgs__msg__CanPacket__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 40, 40},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
bus_msgs__msg__CanPacket__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *bus_msgs__msg__CanPacket__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
