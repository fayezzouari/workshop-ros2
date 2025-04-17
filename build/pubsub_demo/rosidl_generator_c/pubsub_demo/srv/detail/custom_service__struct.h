// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pubsub_demo:srv/CustomService.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pubsub_demo/srv/custom_service.h"


#ifndef PUBSUB_DEMO__SRV__DETAIL__CUSTOM_SERVICE__STRUCT_H_
#define PUBSUB_DEMO__SRV__DETAIL__CUSTOM_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'request'
#include "pubsub_demo/msg/detail/custom_message__struct.h"

/// Struct defined in srv/CustomService in the package pubsub_demo.
typedef struct pubsub_demo__srv__CustomService_Request
{
  pubsub_demo__msg__CustomMessage request;
} pubsub_demo__srv__CustomService_Request;

// Struct for a sequence of pubsub_demo__srv__CustomService_Request.
typedef struct pubsub_demo__srv__CustomService_Request__Sequence
{
  pubsub_demo__srv__CustomService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pubsub_demo__srv__CustomService_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'response'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CustomService in the package pubsub_demo.
typedef struct pubsub_demo__srv__CustomService_Response
{
  rosidl_runtime_c__String response;
} pubsub_demo__srv__CustomService_Response;

// Struct for a sequence of pubsub_demo__srv__CustomService_Response.
typedef struct pubsub_demo__srv__CustomService_Response__Sequence
{
  pubsub_demo__srv__CustomService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pubsub_demo__srv__CustomService_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  pubsub_demo__srv__CustomService_Event__request__MAX_SIZE = 1
};
// response
enum
{
  pubsub_demo__srv__CustomService_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/CustomService in the package pubsub_demo.
typedef struct pubsub_demo__srv__CustomService_Event
{
  service_msgs__msg__ServiceEventInfo info;
  pubsub_demo__srv__CustomService_Request__Sequence request;
  pubsub_demo__srv__CustomService_Response__Sequence response;
} pubsub_demo__srv__CustomService_Event;

// Struct for a sequence of pubsub_demo__srv__CustomService_Event.
typedef struct pubsub_demo__srv__CustomService_Event__Sequence
{
  pubsub_demo__srv__CustomService_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pubsub_demo__srv__CustomService_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PUBSUB_DEMO__SRV__DETAIL__CUSTOM_SERVICE__STRUCT_H_
