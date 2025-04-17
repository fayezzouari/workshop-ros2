// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pubsub_demo:msg/CustomMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pubsub_demo/msg/custom_message.hpp"


#ifndef PUBSUB_DEMO__MSG__DETAIL__CUSTOM_MESSAGE__BUILDER_HPP_
#define PUBSUB_DEMO__MSG__DETAIL__CUSTOM_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pubsub_demo/msg/detail/custom_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pubsub_demo
{

namespace msg
{

namespace builder
{

class Init_CustomMessage_count
{
public:
  explicit Init_CustomMessage_count(::pubsub_demo::msg::CustomMessage & msg)
  : msg_(msg)
  {}
  ::pubsub_demo::msg::CustomMessage count(::pubsub_demo::msg::CustomMessage::_count_type arg)
  {
    msg_.count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pubsub_demo::msg::CustomMessage msg_;
};

class Init_CustomMessage_name
{
public:
  Init_CustomMessage_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CustomMessage_count name(::pubsub_demo::msg::CustomMessage::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_CustomMessage_count(msg_);
  }

private:
  ::pubsub_demo::msg::CustomMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pubsub_demo::msg::CustomMessage>()
{
  return pubsub_demo::msg::builder::Init_CustomMessage_name();
}

}  // namespace pubsub_demo

#endif  // PUBSUB_DEMO__MSG__DETAIL__CUSTOM_MESSAGE__BUILDER_HPP_
