#pragma once

namespace cuda
{
using memory_ptr = int;

/**
 * @brief allocate GPU cuda buffer.
 * Set *ptr to 1
 */
void allocate_buffer(memory_ptr* ptr);

/**
 * @brief release GPU cuda buffer.
 * Set *ptr to 0
 */
void free_buffer(memory_ptr* ptr);
} // namespace cuda