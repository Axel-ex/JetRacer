// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from bus_msgs:srv/CanService.idl
// generated code does not contain a copyright notice

#include "bus_msgs/srv/detail/can_service__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_bus_msgs
const rosidl_type_hash_t *
bus_msgs__srv__CanService__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa1, 0xe0, 0xb1, 0x95, 0x96, 0xc2, 0xb6, 0x09,
      0x37, 0xc6, 0xe0, 0x86, 0x71, 0x4e, 0x6e, 0x6f,
      0x83, 0x20, 0x98, 0xfe, 0xb3, 0xd5, 0x7f, 0x4e,
      0xfd, 0x8d, 0xb4, 0x24, 0xc8, 0xaa, 0x97, 0xb9,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_bus_msgs
const rosidl_type_hash_t *
bus_msgs__srv__CanService_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x95, 0x6a, 0xd1, 0x80, 0xed, 0xdd, 0x54, 0x68,
      0xc7, 0x38, 0x47, 0x71, 0xc2, 0x16, 0x35, 0x4c,
      0x84, 0x5a, 0xfa, 0xac, 0xe0, 0x1e, 0x10, 0x55,
      0xf7, 0x07, 0xe1, 0x81, 0x2b, 0xd3, 0x40, 0x8f,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_bus_msgs
const rosidl_type_hash_t *
bus_msgs__srv__CanService_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x54, 0xe1, 0x16, 0x84, 0x02, 0x45, 0x67, 0x42,
      0x3c, 0xcc, 0x9c, 0x43, 0x1e, 0x02, 0xbd, 0xc4,
      0x38, 0x39, 0xe4, 0xb5, 0xd0, 0x65, 0x88, 0xaa,
      0x38, 0xbd, 0x23, 0x1c, 0x44, 0x36, 0xfe, 0x63,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_bus_msgs
const rosidl_type_hash_t *
bus_msgs__srv__CanService_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe3, 0x92, 0x25, 0x2d, 0xa1, 0x31, 0xa0, 0x28,
      0x41, 0xeb, 0xca, 0x59, 0xec, 0x9d, 0x51, 0xfc,
      0x5c, 0xe0, 0xd1, 0xd6, 0x43, 0x18, 0x4a, 0xb7,
      0x21, 0x29, 0xd2, 0xd7, 0xd5, 0xb6, 0x4c, 0xa0,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char bus_msgs__srv__CanService__TYPE_NAME[] = "bus_msgs/srv/CanService";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char bus_msgs__srv__CanService_Event__TYPE_NAME[] = "bus_msgs/srv/CanService_Event";
static char bus_msgs__srv__CanService_Request__TYPE_NAME[] = "bus_msgs/srv/CanService_Request";
static char bus_msgs__srv__CanService_Response__TYPE_NAME[] = "bus_msgs/srv/CanService_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char bus_msgs__srv__CanService__FIELD_NAME__request_message[] = "request_message";
static char bus_msgs__srv__CanService__FIELD_NAME__response_message[] = "response_message";
static char bus_msgs__srv__CanService__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field bus_msgs__srv__CanService__FIELDS[] = {
  {
    {bus_msgs__srv__CanService__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {bus_msgs__srv__CanService_Request__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {bus_msgs__srv__CanService__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {bus_msgs__srv__CanService_Response__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
  {
    {bus_msgs__srv__CanService__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {bus_msgs__srv__CanService_Event__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription bus_msgs__srv__CanService__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {bus_msgs__srv__CanService_Event__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {bus_msgs__srv__CanService_Request__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {bus_msgs__srv__CanService_Response__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
bus_msgs__srv__CanService__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {bus_msgs__srv__CanService__TYPE_NAME, 23, 23},
      {bus_msgs__srv__CanService__FIELDS, 3, 3},
    },
    {bus_msgs__srv__CanService__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = bus_msgs__srv__CanService_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = bus_msgs__srv__CanService_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = bus_msgs__srv__CanService_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char bus_msgs__srv__CanService_Request__FIELD_NAME__can_id[] = "can_id";
static char bus_msgs__srv__CanService_Request__FIELD_NAME__write_data[] = "write_data";
static char bus_msgs__srv__CanService_Request__FIELD_NAME__read_request[] = "read_request";
static char bus_msgs__srv__CanService_Request__FIELD_NAME__read_length[] = "read_length";

static rosidl_runtime_c__type_description__Field bus_msgs__srv__CanService_Request__FIELDS[] = {
  {
    {bus_msgs__srv__CanService_Request__FIELD_NAME__can_id, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {bus_msgs__srv__CanService_Request__FIELD_NAME__write_data, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {bus_msgs__srv__CanService_Request__FIELD_NAME__read_request, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {bus_msgs__srv__CanService_Request__FIELD_NAME__read_length, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
bus_msgs__srv__CanService_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {bus_msgs__srv__CanService_Request__TYPE_NAME, 31, 31},
      {bus_msgs__srv__CanService_Request__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char bus_msgs__srv__CanService_Response__FIELD_NAME__success[] = "success";
static char bus_msgs__srv__CanService_Response__FIELD_NAME__read_data[] = "read_data";
static char bus_msgs__srv__CanService_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field bus_msgs__srv__CanService_Response__FIELDS[] = {
  {
    {bus_msgs__srv__CanService_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {bus_msgs__srv__CanService_Response__FIELD_NAME__read_data, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {bus_msgs__srv__CanService_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
bus_msgs__srv__CanService_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {bus_msgs__srv__CanService_Response__TYPE_NAME, 32, 32},
      {bus_msgs__srv__CanService_Response__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char bus_msgs__srv__CanService_Event__FIELD_NAME__info[] = "info";
static char bus_msgs__srv__CanService_Event__FIELD_NAME__request[] = "request";
static char bus_msgs__srv__CanService_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field bus_msgs__srv__CanService_Event__FIELDS[] = {
  {
    {bus_msgs__srv__CanService_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {bus_msgs__srv__CanService_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {bus_msgs__srv__CanService_Request__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {bus_msgs__srv__CanService_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {bus_msgs__srv__CanService_Response__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription bus_msgs__srv__CanService_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {bus_msgs__srv__CanService_Request__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {bus_msgs__srv__CanService_Response__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
bus_msgs__srv__CanService_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {bus_msgs__srv__CanService_Event__TYPE_NAME, 29, 29},
      {bus_msgs__srv__CanService_Event__FIELDS, 3, 3},
    },
    {bus_msgs__srv__CanService_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = bus_msgs__srv__CanService_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = bus_msgs__srv__CanService_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Request:\n"
  "uint32 can_id         # ID\n"
  "uint8[] write_data    # Data to write to the device\n"
  "bool read_request     # Whether a read operation is requested\n"
  "uint8 read_length     # Number of bytes to read if read_request is true\n"
  "---\n"
  "# Response\n"
  "bool success          # True if the operation was successful\n"
  "uint8[] read_data     # Data read from the device (if read_request is true)\n"
  "string message        # For error messages or success confirmation";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
bus_msgs__srv__CanService__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {bus_msgs__srv__CanService__TYPE_NAME, 23, 23},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 443, 443},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
bus_msgs__srv__CanService_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {bus_msgs__srv__CanService_Request__TYPE_NAME, 31, 31},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
bus_msgs__srv__CanService_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {bus_msgs__srv__CanService_Response__TYPE_NAME, 32, 32},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
bus_msgs__srv__CanService_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {bus_msgs__srv__CanService_Event__TYPE_NAME, 29, 29},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
bus_msgs__srv__CanService__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *bus_msgs__srv__CanService__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *bus_msgs__srv__CanService_Event__get_individual_type_description_source(NULL);
    sources[3] = *bus_msgs__srv__CanService_Request__get_individual_type_description_source(NULL);
    sources[4] = *bus_msgs__srv__CanService_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
bus_msgs__srv__CanService_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *bus_msgs__srv__CanService_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
bus_msgs__srv__CanService_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *bus_msgs__srv__CanService_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
bus_msgs__srv__CanService_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *bus_msgs__srv__CanService_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *bus_msgs__srv__CanService_Request__get_individual_type_description_source(NULL);
    sources[3] = *bus_msgs__srv__CanService_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}