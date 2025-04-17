// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from pubsub_demo:msg/CustomMessage.idl
// generated code does not contain a copyright notice
#ifndef PUBSUB_DEMO__MSG__DETAIL__CUSTOM_MESSAGE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define PUBSUB_DEMO__MSG__DETAIL__CUSTOM_MESSAGE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "pubsub_demo/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "pubsub_demo/msg/detail/custom_message__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pubsub_demo
bool cdr_serialize_pubsub_demo__msg__CustomMessage(
  const pubsub_demo__msg__CustomMessage * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pubsub_demo
bool cdr_deserialize_pubsub_demo__msg__CustomMessage(
  eprosima::fastcdr::Cdr &,
  pubsub_demo__msg__CustomMessage * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pubsub_demo
size_t get_serialized_size_pubsub_demo__msg__CustomMessage(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pubsub_demo
size_t max_serialized_size_pubsub_demo__msg__CustomMessage(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pubsub_demo
bool cdr_serialize_key_pubsub_demo__msg__CustomMessage(
  const pubsub_demo__msg__CustomMessage * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pubsub_demo
size_t get_serialized_size_key_pubsub_demo__msg__CustomMessage(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pubsub_demo
size_t max_serialized_size_key_pubsub_demo__msg__CustomMessage(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pubsub_demo
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pubsub_demo, msg, CustomMessage)();

#ifdef __cplusplus
}
#endif

#endif  // PUBSUB_DEMO__MSG__DETAIL__CUSTOM_MESSAGE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
