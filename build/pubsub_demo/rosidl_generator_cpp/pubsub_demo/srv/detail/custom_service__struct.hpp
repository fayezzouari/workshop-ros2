// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pubsub_demo:srv/CustomService.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pubsub_demo/srv/custom_service.hpp"


#ifndef PUBSUB_DEMO__SRV__DETAIL__CUSTOM_SERVICE__STRUCT_HPP_
#define PUBSUB_DEMO__SRV__DETAIL__CUSTOM_SERVICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'request'
#include "pubsub_demo/msg/detail/custom_message__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pubsub_demo__srv__CustomService_Request __attribute__((deprecated))
#else
# define DEPRECATED__pubsub_demo__srv__CustomService_Request __declspec(deprecated)
#endif

namespace pubsub_demo
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CustomService_Request_
{
  using Type = CustomService_Request_<ContainerAllocator>;

  explicit CustomService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request(_init)
  {
    (void)_init;
  }

  explicit CustomService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _request_type =
    pubsub_demo::msg::CustomMessage_<ContainerAllocator>;
  _request_type request;

  // setters for named parameter idiom
  Type & set__request(
    const pubsub_demo::msg::CustomMessage_<ContainerAllocator> & _arg)
  {
    this->request = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pubsub_demo::srv::CustomService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const pubsub_demo::srv::CustomService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pubsub_demo::srv::CustomService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pubsub_demo::srv::CustomService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pubsub_demo::srv::CustomService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pubsub_demo::srv::CustomService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pubsub_demo::srv::CustomService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pubsub_demo::srv::CustomService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pubsub_demo::srv::CustomService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pubsub_demo::srv::CustomService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pubsub_demo__srv__CustomService_Request
    std::shared_ptr<pubsub_demo::srv::CustomService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pubsub_demo__srv__CustomService_Request
    std::shared_ptr<pubsub_demo::srv::CustomService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CustomService_Request_ & other) const
  {
    if (this->request != other.request) {
      return false;
    }
    return true;
  }
  bool operator!=(const CustomService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CustomService_Request_

// alias to use template instance with default allocator
using CustomService_Request =
  pubsub_demo::srv::CustomService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace pubsub_demo


#ifndef _WIN32
# define DEPRECATED__pubsub_demo__srv__CustomService_Response __attribute__((deprecated))
#else
# define DEPRECATED__pubsub_demo__srv__CustomService_Response __declspec(deprecated)
#endif

namespace pubsub_demo
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CustomService_Response_
{
  using Type = CustomService_Response_<ContainerAllocator>;

  explicit CustomService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->response = "";
    }
  }

  explicit CustomService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->response = "";
    }
  }

  // field types and members
  using _response_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__response(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pubsub_demo::srv::CustomService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const pubsub_demo::srv::CustomService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pubsub_demo::srv::CustomService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pubsub_demo::srv::CustomService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pubsub_demo::srv::CustomService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pubsub_demo::srv::CustomService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pubsub_demo::srv::CustomService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pubsub_demo::srv::CustomService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pubsub_demo::srv::CustomService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pubsub_demo::srv::CustomService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pubsub_demo__srv__CustomService_Response
    std::shared_ptr<pubsub_demo::srv::CustomService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pubsub_demo__srv__CustomService_Response
    std::shared_ptr<pubsub_demo::srv::CustomService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CustomService_Response_ & other) const
  {
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const CustomService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CustomService_Response_

// alias to use template instance with default allocator
using CustomService_Response =
  pubsub_demo::srv::CustomService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace pubsub_demo


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pubsub_demo__srv__CustomService_Event __attribute__((deprecated))
#else
# define DEPRECATED__pubsub_demo__srv__CustomService_Event __declspec(deprecated)
#endif

namespace pubsub_demo
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CustomService_Event_
{
  using Type = CustomService_Event_<ContainerAllocator>;

  explicit CustomService_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit CustomService_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<pubsub_demo::srv::CustomService_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pubsub_demo::srv::CustomService_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<pubsub_demo::srv::CustomService_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pubsub_demo::srv::CustomService_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<pubsub_demo::srv::CustomService_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pubsub_demo::srv::CustomService_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<pubsub_demo::srv::CustomService_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pubsub_demo::srv::CustomService_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pubsub_demo::srv::CustomService_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const pubsub_demo::srv::CustomService_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pubsub_demo::srv::CustomService_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pubsub_demo::srv::CustomService_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pubsub_demo::srv::CustomService_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pubsub_demo::srv::CustomService_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pubsub_demo::srv::CustomService_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pubsub_demo::srv::CustomService_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pubsub_demo::srv::CustomService_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pubsub_demo::srv::CustomService_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pubsub_demo__srv__CustomService_Event
    std::shared_ptr<pubsub_demo::srv::CustomService_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pubsub_demo__srv__CustomService_Event
    std::shared_ptr<pubsub_demo::srv::CustomService_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CustomService_Event_ & other) const
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
  bool operator!=(const CustomService_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CustomService_Event_

// alias to use template instance with default allocator
using CustomService_Event =
  pubsub_demo::srv::CustomService_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace pubsub_demo

namespace pubsub_demo
{

namespace srv
{

struct CustomService
{
  using Request = pubsub_demo::srv::CustomService_Request;
  using Response = pubsub_demo::srv::CustomService_Response;
  using Event = pubsub_demo::srv::CustomService_Event;
};

}  // namespace srv

}  // namespace pubsub_demo

#endif  // PUBSUB_DEMO__SRV__DETAIL__CUSTOM_SERVICE__STRUCT_HPP_
