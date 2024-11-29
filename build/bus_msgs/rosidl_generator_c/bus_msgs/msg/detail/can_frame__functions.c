// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bus_msgs:msg/CanFrame.idl
// generated code does not contain a copyright notice
#include "bus_msgs/msg/detail/can_frame__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
bus_msgs__msg__CanFrame__init(bus_msgs__msg__CanFrame * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // data_len
  // data
  return true;
}

void
bus_msgs__msg__CanFrame__fini(bus_msgs__msg__CanFrame * msg)
{
  if (!msg) {
    return;
  }
  // id
  // data_len
  // data
}

bool
bus_msgs__msg__CanFrame__are_equal(const bus_msgs__msg__CanFrame * lhs, const bus_msgs__msg__CanFrame * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // data_len
  if (lhs->data_len != rhs->data_len) {
    return false;
  }
  // data
  for (size_t i = 0; i < 8; ++i) {
    if (lhs->data[i] != rhs->data[i]) {
      return false;
    }
  }
  return true;
}

bool
bus_msgs__msg__CanFrame__copy(
  const bus_msgs__msg__CanFrame * input,
  bus_msgs__msg__CanFrame * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // data_len
  output->data_len = input->data_len;
  // data
  for (size_t i = 0; i < 8; ++i) {
    output->data[i] = input->data[i];
  }
  return true;
}

bus_msgs__msg__CanFrame *
bus_msgs__msg__CanFrame__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bus_msgs__msg__CanFrame * msg = (bus_msgs__msg__CanFrame *)allocator.allocate(sizeof(bus_msgs__msg__CanFrame), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bus_msgs__msg__CanFrame));
  bool success = bus_msgs__msg__CanFrame__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bus_msgs__msg__CanFrame__destroy(bus_msgs__msg__CanFrame * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bus_msgs__msg__CanFrame__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bus_msgs__msg__CanFrame__Sequence__init(bus_msgs__msg__CanFrame__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bus_msgs__msg__CanFrame * data = NULL;

  if (size) {
    data = (bus_msgs__msg__CanFrame *)allocator.zero_allocate(size, sizeof(bus_msgs__msg__CanFrame), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bus_msgs__msg__CanFrame__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bus_msgs__msg__CanFrame__fini(&data[i - 1]);
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
bus_msgs__msg__CanFrame__Sequence__fini(bus_msgs__msg__CanFrame__Sequence * array)
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
      bus_msgs__msg__CanFrame__fini(&array->data[i]);
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

bus_msgs__msg__CanFrame__Sequence *
bus_msgs__msg__CanFrame__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bus_msgs__msg__CanFrame__Sequence * array = (bus_msgs__msg__CanFrame__Sequence *)allocator.allocate(sizeof(bus_msgs__msg__CanFrame__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bus_msgs__msg__CanFrame__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bus_msgs__msg__CanFrame__Sequence__destroy(bus_msgs__msg__CanFrame__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bus_msgs__msg__CanFrame__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bus_msgs__msg__CanFrame__Sequence__are_equal(const bus_msgs__msg__CanFrame__Sequence * lhs, const bus_msgs__msg__CanFrame__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bus_msgs__msg__CanFrame__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bus_msgs__msg__CanFrame__Sequence__copy(
  const bus_msgs__msg__CanFrame__Sequence * input,
  bus_msgs__msg__CanFrame__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bus_msgs__msg__CanFrame);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bus_msgs__msg__CanFrame * data =
      (bus_msgs__msg__CanFrame *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bus_msgs__msg__CanFrame__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bus_msgs__msg__CanFrame__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bus_msgs__msg__CanFrame__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
