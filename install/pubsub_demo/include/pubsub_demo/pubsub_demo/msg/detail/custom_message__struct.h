// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pubsub_demo:msg/CustomMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pubsub_demo/msg/custom_message.h"


#ifndef PUBSUB_DEMO__MSG__DETAIL__CUSTOM_MESSAGE__STRUCT_H_
#define PUBSUB_DEMO__MSG__DETAIL__CUSTOM_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/CustomMessage in the package pubsub_demo.
typedef struct pubsub_demo__msg__CustomMessage
{
  rosidl_runtime_c__String name;
  int32_t count;
} pubsub_demo__msg__CustomMessage;

// Struct for a sequence of pubsub_demo__msg__CustomMessage.
typedef struct pubsub_demo__msg__CustomMessage__Sequence
{
  pubsub_demo__msg__CustomMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pubsub_demo__msg__CustomMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PUBSUB_DEMO__MSG__DETAIL__CUSTOM_MESSAGE__STRUCT_H_
