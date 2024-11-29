// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from bus_msgs:srv/CanService.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "bus_msgs/srv/detail/can_service__functions.h"
#include "bus_msgs/srv/detail/can_service__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace bus_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void CanService_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bus_msgs::srv::CanService_Request(_init);
}

void CanService_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bus_msgs::srv::CanService_Request *>(message_memory);
  typed_message->~CanService_Request();
}

size_t size_function__CanService_Request__write_data(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CanService_Request__write_data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__CanService_Request__write_data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__CanService_Request__write_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__CanService_Request__write_data(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__CanService_Request__write_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__CanService_Request__write_data(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__CanService_Request__write_data(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CanService_Request_message_member_array[4] = {
  {
    "can_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bus_msgs::srv::CanService_Request, can_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "write_data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bus_msgs::srv::CanService_Request, write_data),  // bytes offset in struct
    nullptr,  // default value
    size_function__CanService_Request__write_data,  // size() function pointer
    get_const_function__CanService_Request__write_data,  // get_const(index) function pointer
    get_function__CanService_Request__write_data,  // get(index) function pointer
    fetch_function__CanService_Request__write_data,  // fetch(index, &value) function pointer
    assign_function__CanService_Request__write_data,  // assign(index, value) function pointer
    resize_function__CanService_Request__write_data  // resize(index) function pointer
  },
  {
    "read_request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bus_msgs::srv::CanService_Request, read_request),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "read_length",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bus_msgs::srv::CanService_Request, read_length),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CanService_Request_message_members = {
  "bus_msgs::srv",  // message namespace
  "CanService_Request",  // message name
  4,  // number of fields
  sizeof(bus_msgs::srv::CanService_Request),
  false,  // has_any_key_member_
  CanService_Request_message_member_array,  // message members
  CanService_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  CanService_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CanService_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CanService_Request_message_members,
  get_message_typesupport_handle_function,
  &bus_msgs__srv__CanService_Request__get_type_hash,
  &bus_msgs__srv__CanService_Request__get_type_description,
  &bus_msgs__srv__CanService_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace bus_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<bus_msgs::srv::CanService_Request>()
{
  return &::bus_msgs::srv::rosidl_typesupport_introspection_cpp::CanService_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bus_msgs, srv, CanService_Request)() {
  return &::bus_msgs::srv::rosidl_typesupport_introspection_cpp::CanService_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "bus_msgs/srv/detail/can_service__functions.h"
// already included above
// #include "bus_msgs/srv/detail/can_service__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace bus_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void CanService_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bus_msgs::srv::CanService_Response(_init);
}

void CanService_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bus_msgs::srv::CanService_Response *>(message_memory);
  typed_message->~CanService_Response();
}

size_t size_function__CanService_Response__read_data(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CanService_Response__read_data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__CanService_Response__read_data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__CanService_Response__read_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__CanService_Response__read_data(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__CanService_Response__read_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__CanService_Response__read_data(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__CanService_Response__read_data(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CanService_Response_message_member_array[3] = {
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bus_msgs::srv::CanService_Response, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "read_data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bus_msgs::srv::CanService_Response, read_data),  // bytes offset in struct
    nullptr,  // default value
    size_function__CanService_Response__read_data,  // size() function pointer
    get_const_function__CanService_Response__read_data,  // get_const(index) function pointer
    get_function__CanService_Response__read_data,  // get(index) function pointer
    fetch_function__CanService_Response__read_data,  // fetch(index, &value) function pointer
    assign_function__CanService_Response__read_data,  // assign(index, value) function pointer
    resize_function__CanService_Response__read_data  // resize(index) function pointer
  },
  {
    "message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bus_msgs::srv::CanService_Response, message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CanService_Response_message_members = {
  "bus_msgs::srv",  // message namespace
  "CanService_Response",  // message name
  3,  // number of fields
  sizeof(bus_msgs::srv::CanService_Response),
  false,  // has_any_key_member_
  CanService_Response_message_member_array,  // message members
  CanService_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  CanService_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CanService_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CanService_Response_message_members,
  get_message_typesupport_handle_function,
  &bus_msgs__srv__CanService_Response__get_type_hash,
  &bus_msgs__srv__CanService_Response__get_type_description,
  &bus_msgs__srv__CanService_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace bus_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<bus_msgs::srv::CanService_Response>()
{
  return &::bus_msgs::srv::rosidl_typesupport_introspection_cpp::CanService_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bus_msgs, srv, CanService_Response)() {
  return &::bus_msgs::srv::rosidl_typesupport_introspection_cpp::CanService_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "bus_msgs/srv/detail/can_service__functions.h"
// already included above
// #include "bus_msgs/srv/detail/can_service__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace bus_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void CanService_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bus_msgs::srv::CanService_Event(_init);
}

void CanService_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bus_msgs::srv::CanService_Event *>(message_memory);
  typed_message->~CanService_Event();
}

size_t size_function__CanService_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bus_msgs::srv::CanService_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CanService_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bus_msgs::srv::CanService_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__CanService_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bus_msgs::srv::CanService_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__CanService_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bus_msgs::srv::CanService_Request *>(
    get_const_function__CanService_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<bus_msgs::srv::CanService_Request *>(untyped_value);
  value = item;
}

void assign_function__CanService_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bus_msgs::srv::CanService_Request *>(
    get_function__CanService_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const bus_msgs::srv::CanService_Request *>(untyped_value);
  item = value;
}

void resize_function__CanService_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bus_msgs::srv::CanService_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__CanService_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bus_msgs::srv::CanService_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CanService_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bus_msgs::srv::CanService_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__CanService_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bus_msgs::srv::CanService_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__CanService_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bus_msgs::srv::CanService_Response *>(
    get_const_function__CanService_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<bus_msgs::srv::CanService_Response *>(untyped_value);
  value = item;
}

void assign_function__CanService_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bus_msgs::srv::CanService_Response *>(
    get_function__CanService_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const bus_msgs::srv::CanService_Response *>(untyped_value);
  item = value;
}

void resize_function__CanService_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bus_msgs::srv::CanService_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CanService_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bus_msgs::srv::CanService_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bus_msgs::srv::CanService_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(bus_msgs::srv::CanService_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__CanService_Event__request,  // size() function pointer
    get_const_function__CanService_Event__request,  // get_const(index) function pointer
    get_function__CanService_Event__request,  // get(index) function pointer
    fetch_function__CanService_Event__request,  // fetch(index, &value) function pointer
    assign_function__CanService_Event__request,  // assign(index, value) function pointer
    resize_function__CanService_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bus_msgs::srv::CanService_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(bus_msgs::srv::CanService_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__CanService_Event__response,  // size() function pointer
    get_const_function__CanService_Event__response,  // get_const(index) function pointer
    get_function__CanService_Event__response,  // get(index) function pointer
    fetch_function__CanService_Event__response,  // fetch(index, &value) function pointer
    assign_function__CanService_Event__response,  // assign(index, value) function pointer
    resize_function__CanService_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CanService_Event_message_members = {
  "bus_msgs::srv",  // message namespace
  "CanService_Event",  // message name
  3,  // number of fields
  sizeof(bus_msgs::srv::CanService_Event),
  false,  // has_any_key_member_
  CanService_Event_message_member_array,  // message members
  CanService_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  CanService_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CanService_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CanService_Event_message_members,
  get_message_typesupport_handle_function,
  &bus_msgs__srv__CanService_Event__get_type_hash,
  &bus_msgs__srv__CanService_Event__get_type_description,
  &bus_msgs__srv__CanService_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace bus_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<bus_msgs::srv::CanService_Event>()
{
  return &::bus_msgs::srv::rosidl_typesupport_introspection_cpp::CanService_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bus_msgs, srv, CanService_Event)() {
  return &::bus_msgs::srv::rosidl_typesupport_introspection_cpp::CanService_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "bus_msgs/srv/detail/can_service__functions.h"
// already included above
// #include "bus_msgs/srv/detail/can_service__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace bus_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers CanService_service_members = {
  "bus_msgs::srv",  // service namespace
  "CanService",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<bus_msgs::srv::CanService>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t CanService_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CanService_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bus_msgs::srv::CanService_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bus_msgs::srv::CanService_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bus_msgs::srv::CanService_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<bus_msgs::srv::CanService>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<bus_msgs::srv::CanService>,
  &bus_msgs__srv__CanService__get_type_hash,
  &bus_msgs__srv__CanService__get_type_description,
  &bus_msgs__srv__CanService__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace bus_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<bus_msgs::srv::CanService>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::bus_msgs::srv::rosidl_typesupport_introspection_cpp::CanService_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure all of the service_members are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::bus_msgs::srv::CanService_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::bus_msgs::srv::CanService_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::bus_msgs::srv::CanService_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bus_msgs, srv, CanService)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<bus_msgs::srv::CanService>();
}

#ifdef __cplusplus
}
#endif