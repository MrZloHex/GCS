#include <stdio.h>

#include "gcs_memory.h"

Memory ROM;
Memory RAM;

int
main()
{
    ROM = memory_allocate(32767, 16);

    return 0;
}