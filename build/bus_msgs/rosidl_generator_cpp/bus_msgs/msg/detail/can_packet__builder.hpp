// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bus_msgs:msg/CanPacket.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "bus_msgs/msg/can_packet.hpp"


#ifndef BUS_MSGS__MSG__DETAIL__CAN_PACKET__BUILDER_HPP_
#define BUS_MSGS__MSG__DETAIL__CAN_PACKET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bus_msgs/msg/detail/can_packet__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bus_msgs
{

namespace msg
{

namespace builder
{

class Init_CanPacket_data
{
public:
  explicit Init_CanPacket_data(::bus_msgs::msg::CanPacket & msg)
  : msg_(msg)
  {}
  ::bus_msgs::msg::CanPacket data(::bus_msgs::msg::CanPacket::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bus_msgs::msg::CanPacket msg_;
};

class Init_CanPacket_data_len
{
public:
  explicit Init_CanPacket_data_len(::bus_msgs::msg::CanPacket & msg)
  : msg_(msg)
  {}
  Init_CanPacket_data data_len(::bus_msgs::msg::CanPacket::_data_len_type arg)
  {
    msg_.data_len = std::move(arg);
    return Init_CanPacket_data(msg_);
  }

private:
  ::bus_msgs::msg::CanPacket msg_;
};

class Init_CanPacket_id
{
public:
  Init_CanPacket_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CanPacket_data_len id(::bus_msgs::msg::CanPacket::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_CanPacket_data_len(msg_);
  }

private:
  ::bus_msgs::msg::CanPacket msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bus_msgs::msg::CanPacket>()
{
  return bus_msgs::msg::builder::Init_CanPacket_id();
}

}  // namespace bus_msgs

#endif  // BUS_MSGS__MSG__DETAIL__CAN_PACKET__BUILDER_HPP_
