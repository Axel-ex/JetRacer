// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bus_msgs:srv/CanService.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "bus_msgs/srv/can_service.hpp"


#ifndef BUS_MSGS__SRV__DETAIL__CAN_SERVICE__STRUCT_HPP_
#define BUS_MSGS__SRV__DETAIL__CAN_SERVICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bus_msgs__srv__CanService_Request __attribute__((deprecated))
#else
# define DEPRECATED__bus_msgs__srv__CanService_Request __declspec(deprecated)
#endif

namespace bus_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CanService_Request_
{
  using Type = CanService_Request_<ContainerAllocator>;

  explicit CanService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_id = 0ul;
      this->read_request = false;
      this->read_length = 0;
    }
  }

  explicit CanService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_id = 0ul;
      this->read_request = false;
      this->read_length = 0;
    }
  }

  // field types and members
  using _can_id_type =
    uint32_t;
  _can_id_type can_id;
  using _write_data_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _write_data_type write_data;
  using _read_request_type =
    bool;
  _read_request_type read_request;
  using _read_length_type =
    uint8_t;
  _read_length_type read_length;

  // setters for named parameter idiom
  Type & set__can_id(
    const uint32_t & _arg)
  {
    this->can_id = _arg;
    return *this;
  }
  Type & set__write_data(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->write_data = _arg;
    return *this;
  }
  Type & set__read_request(
    const bool & _arg)
  {
    this->read_request = _arg;
    return *this;
  }
  Type & set__read_length(
    const uint8_t & _arg)
  {
    this->read_length = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bus_msgs::srv::CanService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const bus_msgs::srv::CanService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bus_msgs::srv::CanService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bus_msgs::srv::CanService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bus_msgs::srv::CanService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bus_msgs::srv::CanService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bus_msgs::srv::CanService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bus_msgs::srv::CanService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bus_msgs::srv::CanService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bus_msgs::srv::CanService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bus_msgs__srv__CanService_Request
    std::shared_ptr<bus_msgs::srv::CanService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bus_msgs__srv__CanService_Request
    std::shared_ptr<bus_msgs::srv::CanService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CanService_Request_ & other) const
  {
    if (this->can_id != other.can_id) {
      return false;
    }
    if (this->write_data != other.write_data) {
      return false;
    }
    if (this->read_request != other.read_request) {
      return false;
    }
    if (this->read_length != other.read_length) {
      return false;
    }
    return true;
  }
  bool operator!=(const CanService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CanService_Request_

// alias to use template instance with default allocator
using CanService_Request =
  bus_msgs::srv::CanService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace bus_msgs


#ifndef _WIN32
# define DEPRECATED__bus_msgs__srv__CanService_Response __attribute__((deprecated))
#else
# define DEPRECATED__bus_msgs__srv__CanService_Response __declspec(deprecated)
#endif

namespace bus_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CanService_Response_
{
  using Type = CanService_Response_<ContainerAllocator>;

  explicit CanService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit CanService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _read_data_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _read_data_type read_data;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__read_data(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->read_data = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bus_msgs::srv::CanService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const bus_msgs::srv::CanService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bus_msgs::srv::CanService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bus_msgs::srv::CanService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bus_msgs::srv::CanService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bus_msgs::srv::CanService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bus_msgs::srv::CanService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bus_msgs::srv::CanService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bus_msgs::srv::CanService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bus_msgs::srv::CanService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bus_msgs__srv__CanService_Response
    std::shared_ptr<bus_msgs::srv::CanService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bus_msgs__srv__CanService_Response
    std::shared_ptr<bus_msgs::srv::CanService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CanService_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->read_data != other.read_data) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const CanService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CanService_Response_

// alias to use template instance with default allocator
using CanService_Response =
  bus_msgs::srv::CanService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace bus_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bus_msgs__srv__CanService_Event __attribute__((deprecated))
#else
# define DEPRECATED__bus_msgs__srv__CanService_Event __declspec(deprecated)
#endif

namespace bus_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CanService_Event_
{
  using Type = CanService_Event_<ContainerAllocator>;

  explicit CanService_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit CanService_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<bus_msgs::srv::CanService_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bus_msgs::srv::CanService_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<bus_msgs::srv::CanService_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bus_msgs::srv::CanService_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<bus_msgs::srv::CanService_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bus_msgs::srv::CanService_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<bus_msgs::srv::CanService_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bus_msgs::srv::CanService_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bus_msgs::srv::CanService_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const bus_msgs::srv::CanService_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bus_msgs::srv::CanService_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bus_msgs::srv::CanService_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bus_msgs::srv::CanService_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bus_msgs::srv::CanService_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bus_msgs::srv::CanService_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bus_msgs::srv::CanService_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bus_msgs::srv::CanService_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bus_msgs::srv::CanService_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bus_msgs__srv__CanService_Event
    std::shared_ptr<bus_msgs::srv::CanService_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bus_msgs__srv__CanService_Event
    std::shared_ptr<bus_msgs::srv::CanService_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CanService_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const CanService_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CanService_Event_

// alias to use template instance with default allocator
using CanService_Event =
  bus_msgs::srv::CanService_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace bus_msgs

namespace bus_msgs
{

namespace srv
{

struct CanService
{
  using Request = bus_msgs::srv::CanService_Request;
  using Response = bus_msgs::srv::CanService_Response;
  using Event = bus_msgs::srv::CanService_Event;
};

}  // namespace srv

}  // namespace bus_msgs

#endif  // BUS_MSGS__SRV__DETAIL__CAN_SERVICE__STRUCT_HPP_