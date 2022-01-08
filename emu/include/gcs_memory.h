#ifndef MEMORY_H_
#define MEMORY_H_

#include <stdlib.h>
#include <stdio.h>

#include "types.h"

#define MAX_MEM_CAP_8  256
#define MAX_MEM_CAP_16 65356

#define BIT8_ADDR_BUS 8
#define BIT16_ADDR_BUS 16

#define IS_SUPPORTED_BITNESS(btn) ((btn == BIT8_ADDR_BUS) || \
                                   (btn == BIT16_ADDR_BUS))

#define IS_IN_LIMITS_CAPACITY(cap, btn) ((btn == BIT8_ADDR_BUS  && \
                                          cap < MAX_MEM_CAP_8)  || \
                                         (btn == BIT16_ADDR_BUS && \
                                          cap < MAX_MEM_CAP_16))





typedef struct
{
    u8 *memory;
} Memory;


Memory
memory_allocate
(
    u16 mem_capacity,
    u8  bus_bitness
);

#endif /* MEMORY_H_ */