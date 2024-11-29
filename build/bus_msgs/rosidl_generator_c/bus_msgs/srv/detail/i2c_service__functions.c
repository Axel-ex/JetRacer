// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bus_msgs:srv/I2cService.idl
// generated code does not contain a copyright notice
#include "bus_msgs/srv/detail/i2c_service__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `write_data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
bus_msgs__srv__I2cService_Request__init(bus_msgs__srv__I2cService_Request * msg)
{
  if (!msg) {
    return false;
  }
  // device_address
  // write_data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->write_data, 0)) {
    bus_msgs__srv__I2cService_Request__fini(msg);
    return false;
  }
  // read_request
  // read_length
  return true;
}

void
bus_msgs__srv__I2cService_Request__fini(bus_msgs__srv__I2cService_Request * msg)
{
  if (!msg) {
    return;
  }
  // device_address
  // write_data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->write_data);
  // read_request
  // read_length
}

bool
bus_msgs__srv__I2cService_Request__are_equal(const bus_msgs__srv__I2cService_Request * lhs, const bus_msgs__srv__I2cService_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // device_address
  if (lhs->device_address != rhs->device_address) {
    return false;
  }
  // write_data
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->write_data), &(rhs->write_data)))
  {
    return false;
  }
  // read_request
  if (lhs->read_request != rhs->read_request) {
    return false;
  }
  // read_length
  if (lhs->read_length != rhs->read_length) {
    return false;
  }
  return true;
}

bool
bus_msgs__srv__I2cService_Request__copy(
  const bus_msgs__srv__I2cService_Request * input,
  bus_msgs__srv__I2cService_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // device_address
  output->device_address = input->device_address;
  // write_data
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->write_data), &(output->write_data)))
  {
    return false;
  }
  // read_request
  output->read_request = input->read_request;
  // read_length
  output->read_length = input->read_length;
  return true;
}

bus_msgs__srv__I2cService_Request *
bus_msgs__srv__I2cService_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bus_msgs__srv__I2cService_Request * msg = (bus_msgs__srv__I2cService_Request *)allocator.allocate(sizeof(bus_msgs__srv__I2cService_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bus_msgs__srv__I2cService_Request));
  bool success = bus_msgs__srv__I2cService_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bus_msgs__srv__I2cService_Request__destroy(bus_msgs__srv__I2cService_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bus_msgs__srv__I2cService_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bus_msgs__srv__I2cService_Request__Sequence__init(bus_msgs__srv__I2cService_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bus_msgs__srv__I2cService_Request * data = NULL;

  if (size) {
    data = (bus_msgs__srv__I2cService_Request *)allocator.zero_allocate(size, sizeof(bus_msgs__srv__I2cService_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bus_msgs__srv__I2cService_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bus_msgs__srv__I2cService_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
bus_msgs__srv__I2cService_Request__Sequence__fini(bus_msgs__srv__I2cService_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      bus_msgs__srv__I2cService_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

bus_msgs__srv__I2cService_Request__Sequence *
bus_msgs__srv__I2cService_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bus_msgs__srv__I2cService_Request__Sequence * array = (bus_msgs__srv__I2cService_Request__Sequence *)allocator.allocate(sizeof(bus_msgs__srv__I2cService_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bus_msgs__srv__I2cService_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bus_msgs__srv__I2cService_Request__Sequence__destroy(bus_msgs__srv__I2cService_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bus_msgs__srv__I2cService_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bus_msgs__srv__I2cService_Request__Sequence__are_equal(const bus_msgs__srv__I2cService_Request__Sequence * lhs, const bus_msgs__srv__I2cService_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bus_msgs__srv__I2cService_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bus_msgs__srv__I2cService_Request__Sequence__copy(
  const bus_msgs__srv__I2cService_Request__Sequence * input,
  bus_msgs__srv__I2cService_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bus_msgs__srv__I2cService_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bus_msgs__srv__I2cService_Request * data =
      (bus_msgs__srv__I2cService_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bus_msgs__srv__I2cService_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bus_msgs__srv__I2cService_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bus_msgs__srv__I2cService_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `read_data`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
bus_msgs__srv__I2cService_Response__init(bus_msgs__srv__I2cService_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // read_data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->read_data, 0)) {
    bus_msgs__srv__I2cService_Response__fini(msg);
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    bus_msgs__srv__I2cService_Response__fini(msg);
    return false;
  }
  return true;
}

void
bus_msgs__srv__I2cService_Response__fini(bus_msgs__srv__I2cService_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // read_data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->read_data);
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
bus_msgs__srv__I2cService_Response__are_equal(const bus_msgs__srv__I2cService_Response * lhs, const bus_msgs__srv__I2cService_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // read_data
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->read_data), &(rhs->read_data)))
  {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
bus_msgs__srv__I2cService_Response__copy(
  const bus_msgs__srv__I2cService_Response * input,
  bus_msgs__srv__I2cService_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // read_data
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->read_data), &(output->read_data)))
  {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

bus_msgs__srv__I2cService_Response *
bus_msgs__srv__I2cService_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bus_msgs__srv__I2cService_Response * msg = (bus_msgs__srv__I2cService_Response *)allocator.allocate(sizeof(bus_msgs__srv__I2cService_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bus_msgs__srv__I2cService_Response));
  bool success = bus_msgs__srv__I2cService_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bus_msgs__srv__I2cService_Response__destroy(bus_msgs__srv__I2cService_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bus_msgs__srv__I2cService_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bus_msgs__srv__I2cService_Response__Sequence__init(bus_msgs__srv__I2cService_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bus_msgs__srv__I2cService_Response * data = NULL;

  if (size) {
    data = (bus_msgs__srv__I2cService_Response *)allocator.zero_allocate(size, sizeof(bus_msgs__srv__I2cService_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bus_msgs__srv__I2cService_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bus_msgs__srv__I2cService_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
bus_msgs__srv__I2cService_Response__Sequence__fini(bus_msgs__srv__I2cService_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      bus_msgs__srv__I2cService_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

bus_msgs__srv__I2cService_Response__Sequence *
bus_msgs__srv__I2cService_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bus_msgs__srv__I2cService_Response__Sequence * array = (bus_msgs__srv__I2cService_Response__Sequence *)allocator.allocate(sizeof(bus_msgs__srv__I2cService_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bus_msgs__srv__I2cService_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bus_msgs__srv__I2cService_Response__Sequence__destroy(bus_msgs__srv__I2cService_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bus_msgs__srv__I2cService_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bus_msgs__srv__I2cService_Response__Sequence__are_equal(const bus_msgs__srv__I2cService_Response__Sequence * lhs, const bus_msgs__srv__I2cService_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bus_msgs__srv__I2cService_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bus_msgs__srv__I2cService_Response__Sequence__copy(
  const bus_msgs__srv__I2cService_Response__Sequence * input,
  bus_msgs__srv__I2cService_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bus_msgs__srv__I2cService_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bus_msgs__srv__I2cService_Response * data =
      (bus_msgs__srv__I2cService_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bus_msgs__srv__I2cService_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bus_msgs__srv__I2cService_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bus_msgs__srv__I2cService_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "bus_msgs/srv/detail/i2c_service__functions.h"

bool
bus_msgs__srv__I2cService_Event__init(bus_msgs__srv__I2cService_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    bus_msgs__srv__I2cService_Event__fini(msg);
    return false;
  }
  // request
  if (!bus_msgs__srv__I2cService_Request__Sequence__init(&msg->request, 0)) {
    bus_msgs__srv__I2cService_Event__fini(msg);
    return false;
  }
  // response
  if (!bus_msgs__srv__I2cService_Response__Sequence__init(&msg->response, 0)) {
    bus_msgs__srv__I2cService_Event__fini(msg);
    return false;
  }
  return true;
}

void
bus_msgs__srv__I2cService_Event__fini(bus_msgs__srv__I2cService_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  bus_msgs__srv__I2cService_Request__Sequence__fini(&msg->request);
  // response
  bus_msgs__srv__I2cService_Response__Sequence__fini(&msg->response);
}

bool
bus_msgs__srv__I2cService_Event__are_equal(const bus_msgs__srv__I2cService_Event * lhs, const bus_msgs__srv__I2cService_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!bus_msgs__srv__I2cService_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!bus_msgs__srv__I2cService_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
bus_msgs__srv__I2cService_Event__copy(
  const bus_msgs__srv__I2cService_Event * input,
  bus_msgs__srv__I2cService_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!bus_msgs__srv__I2cService_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!bus_msgs__srv__I2cService_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

bus_msgs__srv__I2cService_Event *
bus_msgs__srv__I2cService_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bus_msgs__srv__I2cService_Event * msg = (bus_msgs__srv__I2cService_Event *)allocator.allocate(sizeof(bus_msgs__srv__I2cService_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bus_msgs__srv__I2cService_Event));
  bool success = bus_msgs__srv__I2cService_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bus_msgs__srv__I2cService_Event__destroy(bus_msgs__srv__I2cService_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bus_msgs__srv__I2cService_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bus_msgs__srv__I2cService_Event__Sequence__init(bus_msgs__srv__I2cService_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bus_msgs__srv__I2cService_Event * data = NULL;

  if (size) {
    data = (bus_msgs__srv__I2cService_Event *)allocator.zero_allocate(size, sizeof(bus_msgs__srv__I2cService_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bus_msgs__srv__I2cService_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bus_msgs__srv__I2cService_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
bus_msgs__srv__I2cService_Event__Sequence__fini(bus_msgs__srv__I2cService_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      bus_msgs__srv__I2cService_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

bus_msgs__srv__I2cService_Event__Sequence *
bus_msgs__srv__I2cService_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bus_msgs__srv__I2cService_Event__Sequence * array = (bus_msgs__srv__I2cService_Event__Sequence *)allocator.allocate(sizeof(bus_msgs__srv__I2cService_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bus_msgs__srv__I2cService_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bus_msgs__srv__I2cService_Event__Sequence__destroy(bus_msgs__srv__I2cService_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bus_msgs__srv__I2cService_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bus_msgs__srv__I2cService_Event__Sequence__are_equal(const bus_msgs__srv__I2cService_Event__Sequence * lhs, const bus_msgs__srv__I2cService_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bus_msgs__srv__I2cService_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bus_msgs__srv__I2cService_Event__Sequence__copy(
  const bus_msgs__srv__I2cService_Event__Sequence * input,
  bus_msgs__srv__I2cService_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bus_msgs__srv__I2cService_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bus_msgs__srv__I2cService_Event * data =
      (bus_msgs__srv__I2cService_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bus_msgs__srv__I2cService_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bus_msgs__srv__I2cService_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bus_msgs__srv__I2cService_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
