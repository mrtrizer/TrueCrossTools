#include "crosstools.h"

uint16_t __REV16(uint16_t value) //replacement for function from ST libs
{
    return value << 8 | value >> 8;
}

#ifndef __GXX_RTTI
#warning "Dynamic cast is disabled. dynamic_casts are replaced with static_casts"
#endif
