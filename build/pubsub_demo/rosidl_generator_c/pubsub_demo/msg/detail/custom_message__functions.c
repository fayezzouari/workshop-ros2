// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pubsub_demo:msg/CustomMessage.idl
// generated code does not contain a copyright notice
#include "pubsub_demo/msg/detail/custom_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
pubsub_demo__msg__CustomMessage__init(pubsub_demo__msg__CustomMessage * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    pubsub_demo__msg__CustomMessage__fini(msg);
    return false;
  }
  // count
  return true;
}

void
pubsub_demo__msg__CustomMessage__fini(pubsub_demo__msg__CustomMessage * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // count
}

bool
pubsub_demo__msg__CustomMessage__are_equal(const pubsub_demo__msg__CustomMessage * lhs, const pubsub_demo__msg__CustomMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // count
  if (lhs->count != rhs->count) {
    return false;
  }
  return true;
}

bool
pubsub_demo__msg__CustomMessage__copy(
  const pubsub_demo__msg__CustomMessage * input,
  pubsub_demo__msg__CustomMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // count
  output->count = input->count;
  return true;
}

pubsub_demo__msg__CustomMessage *
pubsub_demo__msg__CustomMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pubsub_demo__msg__CustomMessage * msg = (pubsub_demo__msg__CustomMessage *)allocator.allocate(sizeof(pubsub_demo__msg__CustomMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pubsub_demo__msg__CustomMessage));
  bool success = pubsub_demo__msg__CustomMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pubsub_demo__msg__CustomMessage__destroy(pubsub_demo__msg__CustomMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pubsub_demo__msg__CustomMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pubsub_demo__msg__CustomMessage__Sequence__init(pubsub_demo__msg__CustomMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pubsub_demo__msg__CustomMessage * data = NULL;

  if (size) {
    data = (pubsub_demo__msg__CustomMessage *)allocator.zero_allocate(size, sizeof(pubsub_demo__msg__CustomMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pubsub_demo__msg__CustomMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pubsub_demo__msg__CustomMessage__fini(&data[i - 1]);
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
pubsub_demo__msg__CustomMessage__Sequence__fini(pubsub_demo__msg__CustomMessage__Sequence * array)
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
      pubsub_demo__msg__CustomMessage__fini(&array->data[i]);
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

pubsub_demo__msg__CustomMessage__Sequence *
pubsub_demo__msg__CustomMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pubsub_demo__msg__CustomMessage__Sequence * array = (pubsub_demo__msg__CustomMessage__Sequence *)allocator.allocate(sizeof(pubsub_demo__msg__CustomMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pubsub_demo__msg__CustomMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pubsub_demo__msg__CustomMessage__Sequence__destroy(pubsub_demo__msg__CustomMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pubsub_demo__msg__CustomMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pubsub_demo__msg__CustomMessage__Sequence__are_equal(const pubsub_demo__msg__CustomMessage__Sequence * lhs, const pubsub_demo__msg__CustomMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pubsub_demo__msg__CustomMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pubsub_demo__msg__CustomMessage__Sequence__copy(
  const pubsub_demo__msg__CustomMessage__Sequence * input,
  pubsub_demo__msg__CustomMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pubsub_demo__msg__CustomMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pubsub_demo__msg__CustomMessage * data =
      (pubsub_demo__msg__CustomMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pubsub_demo__msg__CustomMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pubsub_demo__msg__CustomMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pubsub_demo__msg__CustomMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
