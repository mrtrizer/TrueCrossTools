#ifndef CROSSTOOLS_H
#define CROSSTOOLS_H

//Universal logging function
#if defined STM32F40_41xxx

#define DLOG(msg)

#elif defined STM32F10X_MD

#define DLOG(msg)

#elif defined QT_CORE_LIB

#include <QDebug>
#define DLOG(msg) qDebug() << msg

#elif defined __STDC_HOSTED__

#include <iostream>
#define DLOG(msg) std::cout << msg

#else

#define DLOG(msg)

#endif

//Replace dynamic_cast on -fno-rtty compilation flag
#ifndef __GXX_RTTI
#define dynamic_cast static_cast
#endif

//Reverse a 16 bit word's bytes
#ifndef STM32F40_41xxx

#include <inttypes.h>
uint16_t __REV16(uint16_t value); //replacement for function from ST libs

#endif


///Incriments pointer by 1. Return true if start over else false.
/// incWithOver(int &pointer, int bufLength)
bool incWithOver(int &pointer, int bufLength);

#endif //CROSSTOOLS_H
