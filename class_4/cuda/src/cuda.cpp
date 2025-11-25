#include "cuda.h"

namespace cuda
{
void allocate_buffer(memory_ptr* ptr)
{
    *ptr = 1;
}

void free_buffer(memory_ptr* ptr)
{
    *ptr = 0;
}
} // namespace cuda