#include "gcs_memory.h"

Memory
memory_allocate
(
    u16 mem_capacity,
    u8 bus_bitness
)
{
    if (!IS_SUPPORTED_BITNESS(bus_bitness))
        fprintf(stderr, "ERROR: unsopperted bitness of Memory Bus\n");

    if (!IS_IN_LIMITS_CAPACITY(mem_capacity, bus_bitness))
        fprintf(stderr, "ERROR: to much mem capacity for that mem bitness\n");
    
    u8 *mem_ptr = (u8 *)malloc(mem_capacity);
    if (mem_ptr == NULL)
        fprintf(stderr, "ERROR: failed to allocate %u bbytes of memory\n", mem_capacity);
    
    Memory mem = {
        .memory = mem_ptr
    };

    return mem;
}
