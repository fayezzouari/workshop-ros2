// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pubsub_demo:srv/CustomService.idl
// generated code does not contain a copyright notice
#include "pubsub_demo/srv/detail/custom_service__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `request`
#include "pubsub_demo/msg/detail/custom_message__functions.h"

bool
pubsub_demo__srv__CustomService_Request__init(pubsub_demo__srv__CustomService_Request * msg)
{
  if (!msg) {
    return false;
  }
  // request
  if (!pubsub_demo__msg__CustomMessage__init(&msg->request)) {
    pubsub_demo__srv__CustomService_Request__fini(msg);
    return false;
  }
  return true;
}

void
pubsub_demo__srv__CustomService_Request__fini(pubsub_demo__srv__CustomService_Request * msg)
{
  if (!msg) {
    return;
  }
  // request
  pubsub_demo__msg__CustomMessage__fini(&msg->request);
}

bool
pubsub_demo__srv__CustomService_Request__are_equal(const pubsub_demo__srv__CustomService_Request * lhs, const pubsub_demo__srv__CustomService_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // request
  if (!pubsub_demo__msg__CustomMessage__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  return true;
}

bool
pubsub_demo__srv__CustomService_Request__copy(
  const pubsub_demo__srv__CustomService_Request * input,
  pubsub_demo__srv__CustomService_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // request
  if (!pubsub_demo__msg__CustomMessage__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  return true;
}

pubsub_demo__srv__CustomService_Request *
pubsub_demo__srv__CustomService_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pubsub_demo__srv__CustomService_Request * msg = (pubsub_demo__srv__CustomService_Request *)allocator.allocate(sizeof(pubsub_demo__srv__CustomService_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pubsub_demo__srv__CustomService_Request));
  bool success = pubsub_demo__srv__CustomService_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pubsub_demo__srv__CustomService_Request__destroy(pubsub_demo__srv__CustomService_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pubsub_demo__srv__CustomService_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pubsub_demo__srv__CustomService_Request__Sequence__init(pubsub_demo__srv__CustomService_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pubsub_demo__srv__CustomService_Request * data = NULL;

  if (size) {
    data = (pubsub_demo__srv__CustomService_Request *)allocator.zero_allocate(size, sizeof(pubsub_demo__srv__CustomService_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pubsub_demo__srv__CustomService_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pubsub_demo__srv__CustomService_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pubsub_demo__srv__CustomService_Request__Sequence__fini(pubsub_demo__srv__CustomService_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pubsub_demo__srv__CustomService_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pubsub_demo__srv__CustomService_Request__Sequence *
pubsub_demo__srv__CustomService_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pubsub_demo__srv__CustomService_Request__Sequence * array = (pubsub_demo__srv__CustomService_Request__Sequence *)allocator.allocate(sizeof(pubsub_demo__srv__CustomService_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pubsub_demo__srv__CustomService_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pubsub_demo__srv__CustomService_Request__Sequence__destroy(pubsub_demo__srv__CustomService_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pubsub_demo__srv__CustomService_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pubsub_demo__srv__CustomService_Request__Sequence__are_equal(const pubsub_demo__srv__CustomService_Request__Sequence * lhs, const pubsub_demo__srv__CustomService_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pubsub_demo__srv__CustomService_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pubsub_demo__srv__CustomService_Request__Sequence__copy(
  const pubsub_demo__srv__CustomService_Request__Sequence * input,
  pubsub_demo__srv__CustomService_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pubsub_demo__srv__CustomService_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pubsub_demo__srv__CustomService_Request * data =
      (pubsub_demo__srv__CustomService_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pubsub_demo__srv__CustomService_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pubsub_demo__srv__CustomService_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pubsub_demo__srv__CustomService_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `response`
#include "rosidl_runtime_c/string_functions.h"

bool
pubsub_demo__srv__CustomService_Response__init(pubsub_demo__srv__CustomService_Response * msg)
{
  if (!msg) {
    return false;
  }
  // response
  if (!rosidl_runtime_c__String__init(&msg->response)) {
    pubsub_demo__srv__CustomService_Response__fini(msg);
    return false;
  }
  return true;
}

void
pubsub_demo__srv__CustomService_Response__fini(pubsub_demo__srv__CustomService_Response * msg)
{
  if (!msg) {
    return;
  }
  // response
  rosidl_runtime_c__String__fini(&msg->response);
}

bool
pubsub_demo__srv__CustomService_Response__are_equal(const pubsub_demo__srv__CustomService_Response * lhs, const pubsub_demo__srv__CustomService_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // response
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
pubsub_demo__srv__CustomService_Response__copy(
  const pubsub_demo__srv__CustomService_Response * input,
  pubsub_demo__srv__CustomService_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // response
  if (!rosidl_runtime_c__String__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

pubsub_demo__srv__CustomService_Response *
pubsub_demo__srv__CustomService_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pubsub_demo__srv__CustomService_Response * msg = (pubsub_demo__srv__CustomService_Response *)allocator.allocate(sizeof(pubsub_demo__srv__CustomService_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pubsub_demo__srv__CustomService_Response));
  bool success = pubsub_demo__srv__CustomService_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pubsub_demo__srv__CustomService_Response__destroy(pubsub_demo__srv__CustomService_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pubsub_demo__srv__CustomService_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pubsub_demo__srv__CustomService_Response__Sequence__init(pubsub_demo__srv__CustomService_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pubsub_demo__srv__CustomService_Response * data = NULL;

  if (size) {
    data = (pubsub_demo__srv__CustomService_Response *)allocator.zero_allocate(size, sizeof(pubsub_demo__srv__CustomService_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pubsub_demo__srv__CustomService_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pubsub_demo__srv__CustomService_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pubsub_demo__srv__CustomService_Response__Sequence__fini(pubsub_demo__srv__CustomService_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pubsub_demo__srv__CustomService_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pubsub_demo__srv__CustomService_Response__Sequence *
pubsub_demo__srv__CustomService_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pubsub_demo__srv__CustomService_Response__Sequence * array = (pubsub_demo__srv__CustomService_Response__Sequence *)allocator.allocate(sizeof(pubsub_demo__srv__CustomService_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pubsub_demo__srv__CustomService_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pubsub_demo__srv__CustomService_Response__Sequence__destroy(pubsub_demo__srv__CustomService_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pubsub_demo__srv__CustomService_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pubsub_demo__srv__CustomService_Response__Sequence__are_equal(const pubsub_demo__srv__CustomService_Response__Sequence * lhs, const pubsub_demo__srv__CustomService_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pubsub_demo__srv__CustomService_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pubsub_demo__srv__CustomService_Response__Sequence__copy(
  const pubsub_demo__srv__CustomService_Response__Sequence * input,
  pubsub_demo__srv__CustomService_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pubsub_demo__srv__CustomService_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pubsub_demo__srv__CustomService_Response * data =
      (pubsub_demo__srv__CustomService_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pubsub_demo__srv__CustomService_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pubsub_demo__srv__CustomService_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pubsub_demo__srv__CustomService_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "pubsub_demo/srv/detail/custom_service__functions.h"

bool
pubsub_demo__srv__CustomService_Event__init(pubsub_demo__srv__CustomService_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    pubsub_demo__srv__CustomService_Event__fini(msg);
    return false;
  }
  // request
  if (!pubsub_demo__srv__CustomService_Request__Sequence__init(&msg->request, 0)) {
    pubsub_demo__srv__CustomService_Event__fini(msg);
    return false;
  }
  // response
  if (!pubsub_demo__srv__CustomService_Response__Sequence__init(&msg->response, 0)) {
    pubsub_demo__srv__CustomService_Event__fini(msg);
    return false;
  }
  return true;
}

void
pubsub_demo__srv__CustomService_Event__fini(pubsub_demo__srv__CustomService_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  pubsub_demo__srv__CustomService_Request__Sequence__fini(&msg->request);
  // response
  pubsub_demo__srv__CustomService_Response__Sequence__fini(&msg->response);
}

bool
pubsub_demo__srv__CustomService_Event__are_equal(const pubsub_demo__srv__CustomService_Event * lhs, const pubsub_demo__srv__CustomService_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!pubsub_demo__srv__CustomService_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!pubsub_demo__srv__CustomService_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
pubsub_demo__srv__CustomService_Event__copy(
  const pubsub_demo__srv__CustomService_Event * input,
  pubsub_demo__srv__CustomService_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!pubsub_demo__srv__CustomService_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!pubsub_demo__srv__CustomService_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

pubsub_demo__srv__CustomService_Event *
pubsub_demo__srv__CustomService_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pubsub_demo__srv__CustomService_Event * msg = (pubsub_demo__srv__CustomService_Event *)allocator.allocate(sizeof(pubsub_demo__srv__CustomService_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pubsub_demo__srv__CustomService_Event));
  bool success = pubsub_demo__srv__CustomService_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pubsub_demo__srv__CustomService_Event__destroy(pubsub_demo__srv__CustomService_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pubsub_demo__srv__CustomService_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pubsub_demo__srv__CustomService_Event__Sequence__init(pubsub_demo__srv__CustomService_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pubsub_demo__srv__CustomService_Event * data = NULL;

  if (size) {
    data = (pubsub_demo__srv__CustomService_Event *)allocator.zero_allocate(size, sizeof(pubsub_demo__srv__CustomService_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pubsub_demo__srv__CustomService_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pubsub_demo__srv__CustomService_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pubsub_demo__srv__CustomService_Event__Sequence__fini(pubsub_demo__srv__CustomService_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pubsub_demo__srv__CustomService_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pubsub_demo__srv__CustomService_Event__Sequence *
pubsub_demo__srv__CustomService_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pubsub_demo__srv__CustomService_Event__Sequence * array = (pubsub_demo__srv__CustomService_Event__Sequence *)allocator.allocate(sizeof(pubsub_demo__srv__CustomService_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pubsub_demo__srv__CustomService_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pubsub_demo__srv__CustomService_Event__Sequence__destroy(pubsub_demo__srv__CustomService_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pubsub_demo__srv__CustomService_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pubsub_demo__srv__CustomService_Event__Sequence__are_equal(const pubsub_demo__srv__CustomService_Event__Sequence * lhs, const pubsub_demo__srv__CustomService_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pubsub_demo__srv__CustomService_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pubsub_demo__srv__CustomService_Event__Sequence__copy(
  const pubsub_demo__srv__CustomService_Event__Sequence * input,
  pubsub_demo__srv__CustomService_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pubsub_demo__srv__CustomService_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pubsub_demo__srv__CustomService_Event * data =
      (pubsub_demo__srv__CustomService_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pubsub_demo__srv__CustomService_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pubsub_demo__srv__CustomService_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pubsub_demo__srv__CustomService_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
