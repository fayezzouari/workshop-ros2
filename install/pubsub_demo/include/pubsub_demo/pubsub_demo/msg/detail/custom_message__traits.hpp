// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pubsub_demo:msg/CustomMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pubsub_demo/msg/custom_message.hpp"


#ifndef PUBSUB_DEMO__MSG__DETAIL__CUSTOM_MESSAGE__TRAITS_HPP_
#define PUBSUB_DEMO__MSG__DETAIL__CUSTOM_MESSAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pubsub_demo/msg/detail/custom_message__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace pubsub_demo
{

namespace msg
{

inline void to_flow_style_yaml(
  const CustomMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: count
  {
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CustomMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CustomMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace pubsub_demo

namespace rosidl_generator_traits
{

[[deprecated("use pubsub_demo::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pubsub_demo::msg::CustomMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  pubsub_demo::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pubsub_demo::msg::to_yaml() instead")]]
inline std::string to_yaml(const pubsub_demo::msg::CustomMessage & msg)
{
  return pubsub_demo::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pubsub_demo::msg::CustomMessage>()
{
  return "pubsub_demo::msg::CustomMessage";
}

template<>
inline const char * name<pubsub_demo::msg::CustomMessage>()
{
  return "pubsub_demo/msg/CustomMessage";
}

template<>
struct has_fixed_size<pubsub_demo::msg::CustomMessage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pubsub_demo::msg::CustomMessage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pubsub_demo::msg::CustomMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PUBSUB_DEMO__MSG__DETAIL__CUSTOM_MESSAGE__TRAITS_HPP_
