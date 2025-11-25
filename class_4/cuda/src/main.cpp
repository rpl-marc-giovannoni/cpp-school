#include "buffer.h"
#include "cuda.h"

#include <iostream>

int main(void)
{
    // Buffer b;

    cuda::memory_ptr p;

    cuda::allocate_buffer(&p);
    cuda::free_buffer(&p);
}
