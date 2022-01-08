#include <stdio.h>

#include "gcs_memory.h"

Memory PROM;
Memory RAM;
Memory Stack;
Memory VRAM_1;
Memory VRAM_2;

int
main()
{
    PROM = memory_allocate(28672, 16);
    RAM = memory_allocate(15360, 16);
    Stack = memory_allocate(6504, 16);
    VRAM_1 = memory_allocate(7500, 16);
    VRAM_2 = memory_allocate(7500, 16);
    
    
    
    return 0;
}

void
execute()
{

}