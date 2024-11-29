// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bus_msgs:srv/I2cService.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "bus_msgs/srv/i2c_service.h"


#ifndef BUS_MSGS__SRV__DETAIL__I2C_SERVICE__STRUCT_H_
#define BUS_MSGS__SRV__DETAIL__I2C_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'write_data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/I2cService in the package bus_msgs.
typedef struct bus_msgs__srv__I2cService_Request
{
  /// Address of the I2C device
  uint8_t device_address;
  /// Data to write to the device
  rosidl_runtime_c__uint8__Sequence write_data;
  /// Whether a read operation is requested
  bool read_request;
  /// Number of bytes to read if read_request is true
  uint8_t read_length;
} bus_msgs__srv__I2cService_Request;

// Struct for a sequence of bus_msgs__srv__I2cService_Request.
typedef struct bus_msgs__srv__I2cService_Request__Sequence
{
  bus_msgs__srv__I2cService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bus_msgs__srv__I2cService_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'read_data'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/I2cService in the package bus_msgs.
typedef struct bus_msgs__srv__I2cService_Response
{
  /// True if the operation was successful
  bool success;
  /// Data read from the device (if read_request is true)
  rosidl_runtime_c__uint8__Sequence read_data;
  /// For error messages or success confirmation
  rosidl_runtime_c__String message;
} bus_msgs__srv__I2cService_Response;

// Struct for a sequence of bus_msgs__srv__I2cService_Response.
typedef struct bus_msgs__srv__I2cService_Response__Sequence
{
  bus_msgs__srv__I2cService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bus_msgs__srv__I2cService_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  bus_msgs__srv__I2cService_Event__request__MAX_SIZE = 1
};
// response
enum
{
  bus_msgs__srv__I2cService_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/I2cService in the package bus_msgs.
typedef struct bus_msgs__srv__I2cService_Event
{
  service_msgs__msg__ServiceEventInfo info;
  bus_msgs__srv__I2cService_Request__Sequence request;
  bus_msgs__srv__I2cService_Response__Sequence response;
} bus_msgs__srv__I2cService_Event;

// Struct for a sequence of bus_msgs__srv__I2cService_Event.
typedef struct bus_msgs__srv__I2cService_Event__Sequence
{
  bus_msgs__srv__I2cService_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bus_msgs__srv__I2cService_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BUS_MSGS__SRV__DETAIL__I2C_SERVICE__STRUCT_H_