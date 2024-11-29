// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bus_msgs:srv/CanService.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "bus_msgs/srv/can_service.hpp"


#ifndef BUS_MSGS__SRV__DETAIL__CAN_SERVICE__BUILDER_HPP_
#define BUS_MSGS__SRV__DETAIL__CAN_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bus_msgs/srv/detail/can_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bus_msgs
{

namespace srv
{

namespace builder
{

class Init_CanService_Request_read_length
{
public:
  explicit Init_CanService_Request_read_length(::bus_msgs::srv::CanService_Request & msg)
  : msg_(msg)
  {}
  ::bus_msgs::srv::CanService_Request read_length(::bus_msgs::srv::CanService_Request::_read_length_type arg)
  {
    msg_.read_length = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bus_msgs::srv::CanService_Request msg_;
};

class Init_CanService_Request_read_request
{
public:
  explicit Init_CanService_Request_read_request(::bus_msgs::srv::CanService_Request & msg)
  : msg_(msg)
  {}
  Init_CanService_Request_read_length read_request(::bus_msgs::srv::CanService_Request::_read_request_type arg)
  {
    msg_.read_request = std::move(arg);
    return Init_CanService_Request_read_length(msg_);
  }

private:
  ::bus_msgs::srv::CanService_Request msg_;
};

class Init_CanService_Request_write_data
{
public:
  explicit Init_CanService_Request_write_data(::bus_msgs::srv::CanService_Request & msg)
  : msg_(msg)
  {}
  Init_CanService_Request_read_request write_data(::bus_msgs::srv::CanService_Request::_write_data_type arg)
  {
    msg_.write_data = std::move(arg);
    return Init_CanService_Request_read_request(msg_);
  }

private:
  ::bus_msgs::srv::CanService_Request msg_;
};

class Init_CanService_Request_can_id
{
public:
  Init_CanService_Request_can_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CanService_Request_write_data can_id(::bus_msgs::srv::CanService_Request::_can_id_type arg)
  {
    msg_.can_id = std::move(arg);
    return Init_CanService_Request_write_data(msg_);
  }

private:
  ::bus_msgs::srv::CanService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bus_msgs::srv::CanService_Request>()
{
  return bus_msgs::srv::builder::Init_CanService_Request_can_id();
}

}  // namespace bus_msgs


namespace bus_msgs
{

namespace srv
{

namespace builder
{

class Init_CanService_Response_message
{
public:
  explicit Init_CanService_Response_message(::bus_msgs::srv::CanService_Response & msg)
  : msg_(msg)
  {}
  ::bus_msgs::srv::CanService_Response message(::bus_msgs::srv::CanService_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bus_msgs::srv::CanService_Response msg_;
};

class Init_CanService_Response_read_data
{
public:
  explicit Init_CanService_Response_read_data(::bus_msgs::srv::CanService_Response & msg)
  : msg_(msg)
  {}
  Init_CanService_Response_message read_data(::bus_msgs::srv::CanService_Response::_read_data_type arg)
  {
    msg_.read_data = std::move(arg);
    return Init_CanService_Response_message(msg_);
  }

private:
  ::bus_msgs::srv::CanService_Response msg_;
};

class Init_CanService_Response_success
{
public:
  Init_CanService_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CanService_Response_read_data success(::bus_msgs::srv::CanService_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_CanService_Response_read_data(msg_);
  }

private:
  ::bus_msgs::srv::CanService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bus_msgs::srv::CanService_Response>()
{
  return bus_msgs::srv::builder::Init_CanService_Response_success();
}

}  // namespace bus_msgs


namespace bus_msgs
{

namespace srv
{

namespace builder
{

class Init_CanService_Event_response
{
public:
  explicit Init_CanService_Event_response(::bus_msgs::srv::CanService_Event & msg)
  : msg_(msg)
  {}
  ::bus_msgs::srv::CanService_Event response(::bus_msgs::srv::CanService_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bus_msgs::srv::CanService_Event msg_;
};

class Init_CanService_Event_request
{
public:
  explicit Init_CanService_Event_request(::bus_msgs::srv::CanService_Event & msg)
  : msg_(msg)
  {}
  Init_CanService_Event_response request(::bus_msgs::srv::CanService_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_CanService_Event_response(msg_);
  }

private:
  ::bus_msgs::srv::CanService_Event msg_;
};

class Init_CanService_Event_info
{
public:
  Init_CanService_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CanService_Event_request info(::bus_msgs::srv::CanService_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_CanService_Event_request(msg_);
  }

private:
  ::bus_msgs::srv::CanService_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bus_msgs::srv::CanService_Event>()
{
  return bus_msgs::srv::builder::Init_CanService_Event_info();
}

}  // namespace bus_msgs

#endif  // BUS_MSGS__SRV__DETAIL__CAN_SERVICE__BUILDER_HPP_
