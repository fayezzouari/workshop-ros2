// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pubsub_demo:srv/CustomService.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pubsub_demo/srv/detail/custom_service__rosidl_typesupport_introspection_c.h"
#include "pubsub_demo/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pubsub_demo/srv/detail/custom_service__functions.h"
#include "pubsub_demo/srv/detail/custom_service__struct.h"


// Include directives for member types
// Member `request`
#include "pubsub_demo/msg/custom_message.h"
// Member `request`
#include "pubsub_demo/msg/detail/custom_message__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pubsub_demo__srv__CustomService_Request__rosidl_typesupport_introspection_c__CustomService_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pubsub_demo__srv__CustomService_Request__init(message_memory);
}

void pubsub_demo__srv__CustomService_Request__rosidl_typesupport_introspection_c__CustomService_Request_fini_function(void * message_memory)
{
  pubsub_demo__srv__CustomService_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember pubsub_demo__srv__CustomService_Request__rosidl_typesupport_introspection_c__CustomService_Request_message_member_array[1] = {
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pubsub_demo__srv__CustomService_Request, request),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pubsub_demo__srv__CustomService_Request__rosidl_typesupport_introspection_c__CustomService_Request_message_members = {
  "pubsub_demo__srv",  // message namespace
  "CustomService_Request",  // message name
  1,  // number of fields
  sizeof(pubsub_demo__srv__CustomService_Request),
  false,  // has_any_key_member_
  pubsub_demo__srv__CustomService_Request__rosidl_typesupport_introspection_c__CustomService_Request_message_member_array,  // message members
  pubsub_demo__srv__CustomService_Request__rosidl_typesupport_introspection_c__CustomService_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  pubsub_demo__srv__CustomService_Request__rosidl_typesupport_introspection_c__CustomService_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pubsub_demo__srv__CustomService_Request__rosidl_typesupport_introspection_c__CustomService_Request_message_type_support_handle = {
  0,
  &pubsub_demo__srv__CustomService_Request__rosidl_typesupport_introspection_c__CustomService_Request_message_members,
  get_message_typesupport_handle_function,
  &pubsub_demo__srv__CustomService_Request__get_type_hash,
  &pubsub_demo__srv__CustomService_Request__get_type_description,
  &pubsub_demo__srv__CustomService_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pubsub_demo
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pubsub_demo, srv, CustomService_Request)() {
  pubsub_demo__srv__CustomService_Request__rosidl_typesupport_introspection_c__CustomService_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pubsub_demo, msg, CustomMessage)();
  if (!pubsub_demo__srv__CustomService_Request__rosidl_typesupport_introspection_c__CustomService_Request_message_type_support_handle.typesupport_identifier) {
    pubsub_demo__srv__CustomService_Request__rosidl_typesupport_introspection_c__CustomService_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pubsub_demo__srv__CustomService_Request__rosidl_typesupport_introspection_c__CustomService_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "pubsub_demo/srv/detail/custom_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pubsub_demo/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pubsub_demo/srv/detail/custom_service__functions.h"
// already included above
// #include "pubsub_demo/srv/detail/custom_service__struct.h"


// Include directives for member types
// Member `response`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pubsub_demo__srv__CustomService_Response__rosidl_typesupport_introspection_c__CustomService_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pubsub_demo__srv__CustomService_Response__init(message_memory);
}

void pubsub_demo__srv__CustomService_Response__rosidl_typesupport_introspection_c__CustomService_Response_fini_function(void * message_memory)
{
  pubsub_demo__srv__CustomService_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember pubsub_demo__srv__CustomService_Response__rosidl_typesupport_introspection_c__CustomService_Response_message_member_array[1] = {
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pubsub_demo__srv__CustomService_Response, response),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pubsub_demo__srv__CustomService_Response__rosidl_typesupport_introspection_c__CustomService_Response_message_members = {
  "pubsub_demo__srv",  // message namespace
  "CustomService_Response",  // message name
  1,  // number of fields
  sizeof(pubsub_demo__srv__CustomService_Response),
  false,  // has_any_key_member_
  pubsub_demo__srv__CustomService_Response__rosidl_typesupport_introspection_c__CustomService_Response_message_member_array,  // message members
  pubsub_demo__srv__CustomService_Response__rosidl_typesupport_introspection_c__CustomService_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  pubsub_demo__srv__CustomService_Response__rosidl_typesupport_introspection_c__CustomService_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pubsub_demo__srv__CustomService_Response__rosidl_typesupport_introspection_c__CustomService_Response_message_type_support_handle = {
  0,
  &pubsub_demo__srv__CustomService_Response__rosidl_typesupport_introspection_c__CustomService_Response_message_members,
  get_message_typesupport_handle_function,
  &pubsub_demo__srv__CustomService_Response__get_type_hash,
  &pubsub_demo__srv__CustomService_Response__get_type_description,
  &pubsub_demo__srv__CustomService_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pubsub_demo
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pubsub_demo, srv, CustomService_Response)() {
  if (!pubsub_demo__srv__CustomService_Response__rosidl_typesupport_introspection_c__CustomService_Response_message_type_support_handle.typesupport_identifier) {
    pubsub_demo__srv__CustomService_Response__rosidl_typesupport_introspection_c__CustomService_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pubsub_demo__srv__CustomService_Response__rosidl_typesupport_introspection_c__CustomService_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "pubsub_demo/srv/detail/custom_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pubsub_demo/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pubsub_demo/srv/detail/custom_service__functions.h"
// already included above
// #include "pubsub_demo/srv/detail/custom_service__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "pubsub_demo/srv/custom_service.h"
// Member `request`
// Member `response`
// already included above
// #include "pubsub_demo/srv/detail/custom_service__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pubsub_demo__srv__CustomService_Event__rosidl_typesupport_introspection_c__CustomService_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pubsub_demo__srv__CustomService_Event__init(message_memory);
}

void pubsub_demo__srv__CustomService_Event__rosidl_typesupport_introspection_c__CustomService_Event_fini_function(void * message_memory)
{
  pubsub_demo__srv__CustomService_Event__fini(message_memory);
}

size_t pubsub_demo__srv__CustomService_Event__rosidl_typesupport_introspection_c__size_function__CustomService_Event__request(
  const void * untyped_member)
{
  const pubsub_demo__srv__CustomService_Request__Sequence * member =
    (const pubsub_demo__srv__CustomService_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * pubsub_demo__srv__CustomService_Event__rosidl_typesupport_introspection_c__get_const_function__CustomService_Event__request(
  const void * untyped_member, size_t index)
{
  const pubsub_demo__srv__CustomService_Request__Sequence * member =
    (const pubsub_demo__srv__CustomService_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pubsub_demo__srv__CustomService_Event__rosidl_typesupport_introspection_c__get_function__CustomService_Event__request(
  void * untyped_member, size_t index)
{
  pubsub_demo__srv__CustomService_Request__Sequence * member =
    (pubsub_demo__srv__CustomService_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void pubsub_demo__srv__CustomService_Event__rosidl_typesupport_introspection_c__fetch_function__CustomService_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const pubsub_demo__srv__CustomService_Request * item =
    ((const pubsub_demo__srv__CustomService_Request *)
    pubsub_demo__srv__CustomService_Event__rosidl_typesupport_introspection_c__get_const_function__CustomService_Event__request(untyped_member, index));
  pubsub_demo__srv__CustomService_Request * value =
    (pubsub_demo__srv__CustomService_Request *)(untyped_value);
  *value = *item;
}

void pubsub_demo__srv__CustomService_Event__rosidl_typesupport_introspection_c__assign_function__CustomService_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  pubsub_demo__srv__CustomService_Request * item =
    ((pubsub_demo__srv__CustomService_Request *)
    pubsub_demo__srv__CustomService_Event__rosidl_typesupport_introspection_c__get_function__CustomService_Event__request(untyped_member, index));
  const pubsub_demo__srv__CustomService_Request * value =
    (const pubsub_demo__srv__CustomService_Request *)(untyped_value);
  *item = *value;
}

bool pubsub_demo__srv__CustomService_Event__rosidl_typesupport_introspection_c__resize_function__CustomService_Event__request(
  void * untyped_member, size_t size)
{
  pubsub_demo__srv__CustomService_Request__Sequence * member =
    (pubsub_demo__srv__CustomService_Request__Sequence *)(untyped_member);
  pubsub_demo__srv__CustomService_Request__Sequence__fini(member);
  return pubsub_demo__srv__CustomService_Request__Sequence__init(member, size);
}

size_t pubsub_demo__srv__CustomService_Event__rosidl_typesupport_introspection_c__size_function__CustomService_Event__response(
  const void * untyped_member)
{
  const pubsub_demo__srv__CustomService_Response__Sequence * member =
    (const pubsub_demo__srv__CustomService_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * pubsub_demo__srv__CustomService_Event__rosidl_typesupport_introspection_c__get_const_function__CustomService_Event__response(
  const void * untyped_member, size_t index)
{
  const pubsub_demo__srv__CustomService_Response__Sequence * member =
    (const pubsub_demo__srv__CustomService_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pubsub_demo__srv__CustomService_Event__rosidl_typesupport_introspection_c__get_function__CustomService_Event__response(
  void * untyped_member, size_t index)
{
  pubsub_demo__srv__CustomService_Response__Sequence * member =
    (pubsub_demo__srv__CustomService_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void pubsub_demo__srv__CustomService_Event__rosidl_typesupport_introspection_c__fetch_function__CustomService_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const pubsub_demo__srv__CustomService_Response * item =
    ((const pubsub_demo__srv__CustomService_Response *)
    pubsub_demo__srv__CustomService_Event__rosidl_typesupport_introspection_c__get_const_function__CustomService_Event__response(untyped_member, index));
  pubsub_demo__srv__CustomService_Response * value =
    (pubsub_demo__srv__CustomService_Response *)(untyped_value);
  *value = *item;
}

void pubsub_demo__srv__CustomService_Event__rosidl_typesupport_introspection_c__assign_function__CustomService_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  pubsub_demo__srv__CustomService_Response * item =
    ((pubsub_demo__srv__CustomService_Response *)
    pubsub_demo__srv__CustomService_Event__rosidl_typesupport_introspection_c__get_function__CustomService_Event__response(untyped_member, index));
  const pubsub_demo__srv__CustomService_Response * value =
    (const pubsub_demo__srv__CustomService_Response *)(untyped_value);
  *item = *value;
}

bool pubsub_demo__srv__CustomService_Event__rosidl_typesupport_introspection_c__resize_function__CustomService_Event__response(
  void * untyped_member, size_t size)
{
  pubsub_demo__srv__CustomService_Response__Sequence * member =
    (pubsub_demo__srv__CustomService_Response__Sequence *)(untyped_member);
  pubsub_demo__srv__CustomService_Response__Sequence__fini(member);
  return pubsub_demo__srv__CustomService_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember pubsub_demo__srv__CustomService_Event__rosidl_typesupport_introspection_c__CustomService_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pubsub_demo__srv__CustomService_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(pubsub_demo__srv__CustomService_Event, request),  // bytes offset in struct
    NULL,  // default value
    pubsub_demo__srv__CustomService_Event__rosidl_typesupport_introspection_c__size_function__CustomService_Event__request,  // size() function pointer
    pubsub_demo__srv__CustomService_Event__rosidl_typesupport_introspection_c__get_const_function__CustomService_Event__request,  // get_const(index) function pointer
    pubsub_demo__srv__CustomService_Event__rosidl_typesupport_introspection_c__get_function__CustomService_Event__request,  // get(index) function pointer
    pubsub_demo__srv__CustomService_Event__rosidl_typesupport_introspection_c__fetch_function__CustomService_Event__request,  // fetch(index, &value) function pointer
    pubsub_demo__srv__CustomService_Event__rosidl_typesupport_introspection_c__assign_function__CustomService_Event__request,  // assign(index, value) function pointer
    pubsub_demo__srv__CustomService_Event__rosidl_typesupport_introspection_c__resize_function__CustomService_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(pubsub_demo__srv__CustomService_Event, response),  // bytes offset in struct
    NULL,  // default value
    pubsub_demo__srv__CustomService_Event__rosidl_typesupport_introspection_c__size_function__CustomService_Event__response,  // size() function pointer
    pubsub_demo__srv__CustomService_Event__rosidl_typesupport_introspection_c__get_const_function__CustomService_Event__response,  // get_const(index) function pointer
    pubsub_demo__srv__CustomService_Event__rosidl_typesupport_introspection_c__get_function__CustomService_Event__response,  // get(index) function pointer
    pubsub_demo__srv__CustomService_Event__rosidl_typesupport_introspection_c__fetch_function__CustomService_Event__response,  // fetch(index, &value) function pointer
    pubsub_demo__srv__CustomService_Event__rosidl_typesupport_introspection_c__assign_function__CustomService_Event__response,  // assign(index, value) function pointer
    pubsub_demo__srv__CustomService_Event__rosidl_typesupport_introspection_c__resize_function__CustomService_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pubsub_demo__srv__CustomService_Event__rosidl_typesupport_introspection_c__CustomService_Event_message_members = {
  "pubsub_demo__srv",  // message namespace
  "CustomService_Event",  // message name
  3,  // number of fields
  sizeof(pubsub_demo__srv__CustomService_Event),
  false,  // has_any_key_member_
  pubsub_demo__srv__CustomService_Event__rosidl_typesupport_introspection_c__CustomService_Event_message_member_array,  // message members
  pubsub_demo__srv__CustomService_Event__rosidl_typesupport_introspection_c__CustomService_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  pubsub_demo__srv__CustomService_Event__rosidl_typesupport_introspection_c__CustomService_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pubsub_demo__srv__CustomService_Event__rosidl_typesupport_introspection_c__CustomService_Event_message_type_support_handle = {
  0,
  &pubsub_demo__srv__CustomService_Event__rosidl_typesupport_introspection_c__CustomService_Event_message_members,
  get_message_typesupport_handle_function,
  &pubsub_demo__srv__CustomService_Event__get_type_hash,
  &pubsub_demo__srv__CustomService_Event__get_type_description,
  &pubsub_demo__srv__CustomService_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pubsub_demo
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pubsub_demo, srv, CustomService_Event)() {
  pubsub_demo__srv__CustomService_Event__rosidl_typesupport_introspection_c__CustomService_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  pubsub_demo__srv__CustomService_Event__rosidl_typesupport_introspection_c__CustomService_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pubsub_demo, srv, CustomService_Request)();
  pubsub_demo__srv__CustomService_Event__rosidl_typesupport_introspection_c__CustomService_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pubsub_demo, srv, CustomService_Response)();
  if (!pubsub_demo__srv__CustomService_Event__rosidl_typesupport_introspection_c__CustomService_Event_message_type_support_handle.typesupport_identifier) {
    pubsub_demo__srv__CustomService_Event__rosidl_typesupport_introspection_c__CustomService_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pubsub_demo__srv__CustomService_Event__rosidl_typesupport_introspection_c__CustomService_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "pubsub_demo/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "pubsub_demo/srv/detail/custom_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers pubsub_demo__srv__detail__custom_service__rosidl_typesupport_introspection_c__CustomService_service_members = {
  "pubsub_demo__srv",  // service namespace
  "CustomService",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // pubsub_demo__srv__detail__custom_service__rosidl_typesupport_introspection_c__CustomService_Request_message_type_support_handle,
  NULL,  // response message
  // pubsub_demo__srv__detail__custom_service__rosidl_typesupport_introspection_c__CustomService_Response_message_type_support_handle
  NULL  // event_message
  // pubsub_demo__srv__detail__custom_service__rosidl_typesupport_introspection_c__CustomService_Response_message_type_support_handle
};


static rosidl_service_type_support_t pubsub_demo__srv__detail__custom_service__rosidl_typesupport_introspection_c__CustomService_service_type_support_handle = {
  0,
  &pubsub_demo__srv__detail__custom_service__rosidl_typesupport_introspection_c__CustomService_service_members,
  get_service_typesupport_handle_function,
  &pubsub_demo__srv__CustomService_Request__rosidl_typesupport_introspection_c__CustomService_Request_message_type_support_handle,
  &pubsub_demo__srv__CustomService_Response__rosidl_typesupport_introspection_c__CustomService_Response_message_type_support_handle,
  &pubsub_demo__srv__CustomService_Event__rosidl_typesupport_introspection_c__CustomService_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    pubsub_demo,
    srv,
    CustomService
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    pubsub_demo,
    srv,
    CustomService
  ),
  &pubsub_demo__srv__CustomService__get_type_hash,
  &pubsub_demo__srv__CustomService__get_type_description,
  &pubsub_demo__srv__CustomService__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pubsub_demo, srv, CustomService_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pubsub_demo, srv, CustomService_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pubsub_demo, srv, CustomService_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pubsub_demo
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pubsub_demo, srv, CustomService)(void) {
  if (!pubsub_demo__srv__detail__custom_service__rosidl_typesupport_introspection_c__CustomService_service_type_support_handle.typesupport_identifier) {
    pubsub_demo__srv__detail__custom_service__rosidl_typesupport_introspection_c__CustomService_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)pubsub_demo__srv__detail__custom_service__rosidl_typesupport_introspection_c__CustomService_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pubsub_demo, srv, CustomService_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pubsub_demo, srv, CustomService_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pubsub_demo, srv, CustomService_Event)()->data;
  }

  return &pubsub_demo__srv__detail__custom_service__rosidl_typesupport_introspection_c__CustomService_service_type_support_handle;
}
