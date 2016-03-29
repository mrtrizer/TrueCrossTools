#include "crosstools.h"
#include <assert.h>

#ifndef STM32F40_41xxx
uint16_t __REV16(uint16_t value) //replacement for function from ST libs
{
    return value << 8 | value >> 8;
}
#endif

#ifndef __GXX_RTTI
#ifdef warning
#warning "Dynamic cast is disabled. dynamic_casts are replaced with static_casts"
#endif
#endif


bool incWithOver(int &pointer, int bufLength)
{
    assert(pointer < bufLength);
    pointer++;
    bool startOver = pointer >= bufLength;
    if(startOver)
        pointer = 0;
    return startOver;
}
