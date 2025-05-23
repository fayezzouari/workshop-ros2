// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pubsub_demo:msg/CustomMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pubsub_demo/msg/custom_message.hpp"


#ifndef PUBSUB_DEMO__MSG__DETAIL__CUSTOM_MESSAGE__STRUCT_HPP_
#define PUBSUB_DEMO__MSG__DETAIL__CUSTOM_MESSAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__pubsub_demo__msg__CustomMessage __attribute__((deprecated))
#else
# define DEPRECATED__pubsub_demo__msg__CustomMessage __declspec(deprecated)
#endif

namespace pubsub_demo
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CustomMessage_
{
  using Type = CustomMessage_<ContainerAllocator>;

  explicit CustomMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->count = 0l;
    }
  }

  explicit CustomMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->count = 0l;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _count_type =
    int32_t;
  _count_type count;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__count(
    const int32_t & _arg)
  {
    this->count = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pubsub_demo::msg::CustomMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const pubsub_demo::msg::CustomMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pubsub_demo::msg::CustomMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pubsub_demo::msg::CustomMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pubsub_demo::msg::CustomMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pubsub_demo::msg::CustomMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pubsub_demo::msg::CustomMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pubsub_demo::msg::CustomMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pubsub_demo::msg::CustomMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pubsub_demo::msg::CustomMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pubsub_demo__msg__CustomMessage
    std::shared_ptr<pubsub_demo::msg::CustomMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pubsub_demo__msg__CustomMessage
    std::shared_ptr<pubsub_demo::msg::CustomMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CustomMessage_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->count != other.count) {
      return false;
    }
    return true;
  }
  bool operator!=(const CustomMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CustomMessage_

// alias to use template instance with default allocator
using CustomMessage =
  pubsub_demo::msg::CustomMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pubsub_demo

#endif  // PUBSUB_DEMO__MSG__DETAIL__CUSTOM_MESSAGE__STRUCT_HPP_
