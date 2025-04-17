// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from pubsub_demo:msg/CustomMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pubsub_demo/msg/custom_message.h"


#ifndef PUBSUB_DEMO__MSG__DETAIL__CUSTOM_MESSAGE__FUNCTIONS_H_
#define PUBSUB_DEMO__MSG__DETAIL__CUSTOM_MESSAGE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "pubsub_demo/msg/rosidl_generator_c__visibility_control.h"

#include "pubsub_demo/msg/detail/custom_message__struct.h"

/// Initialize msg/CustomMessage message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pubsub_demo__msg__CustomMessage
 * )) before or use
 * pubsub_demo__msg__CustomMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
bool
pubsub_demo__msg__CustomMessage__init(pubsub_demo__msg__CustomMessage * msg);

/// Finalize msg/CustomMessage message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
void
pubsub_demo__msg__CustomMessage__fini(pubsub_demo__msg__CustomMessage * msg);

/// Create msg/CustomMessage message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pubsub_demo__msg__CustomMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
pubsub_demo__msg__CustomMessage *
pubsub_demo__msg__CustomMessage__create(void);

/// Destroy msg/CustomMessage message.
/**
 * It calls
 * pubsub_demo__msg__CustomMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
void
pubsub_demo__msg__CustomMessage__destroy(pubsub_demo__msg__CustomMessage * msg);

/// Check for msg/CustomMessage message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
bool
pubsub_demo__msg__CustomMessage__are_equal(const pubsub_demo__msg__CustomMessage * lhs, const pubsub_demo__msg__CustomMessage * rhs);

/// Copy a msg/CustomMessage message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
bool
pubsub_demo__msg__CustomMessage__copy(
  const pubsub_demo__msg__CustomMessage * input,
  pubsub_demo__msg__CustomMessage * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
const rosidl_type_hash_t *
pubsub_demo__msg__CustomMessage__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
const rosidl_runtime_c__type_description__TypeDescription *
pubsub_demo__msg__CustomMessage__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
const rosidl_runtime_c__type_description__TypeSource *
pubsub_demo__msg__CustomMessage__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
const rosidl_runtime_c__type_description__TypeSource__Sequence *
pubsub_demo__msg__CustomMessage__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/CustomMessage messages.
/**
 * It allocates the memory for the number of elements and calls
 * pubsub_demo__msg__CustomMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
bool
pubsub_demo__msg__CustomMessage__Sequence__init(pubsub_demo__msg__CustomMessage__Sequence * array, size_t size);

/// Finalize array of msg/CustomMessage messages.
/**
 * It calls
 * pubsub_demo__msg__CustomMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
void
pubsub_demo__msg__CustomMessage__Sequence__fini(pubsub_demo__msg__CustomMessage__Sequence * array);

/// Create array of msg/CustomMessage messages.
/**
 * It allocates the memory for the array and calls
 * pubsub_demo__msg__CustomMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
pubsub_demo__msg__CustomMessage__Sequence *
pubsub_demo__msg__CustomMessage__Sequence__create(size_t size);

/// Destroy array of msg/CustomMessage messages.
/**
 * It calls
 * pubsub_demo__msg__CustomMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
void
pubsub_demo__msg__CustomMessage__Sequence__destroy(pubsub_demo__msg__CustomMessage__Sequence * array);

/// Check for msg/CustomMessage message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
bool
pubsub_demo__msg__CustomMessage__Sequence__are_equal(const pubsub_demo__msg__CustomMessage__Sequence * lhs, const pubsub_demo__msg__CustomMessage__Sequence * rhs);

/// Copy an array of msg/CustomMessage messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
bool
pubsub_demo__msg__CustomMessage__Sequence__copy(
  const pubsub_demo__msg__CustomMessage__Sequence * input,
  pubsub_demo__msg__CustomMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PUBSUB_DEMO__MSG__DETAIL__CUSTOM_MESSAGE__FUNCTIONS_H_
