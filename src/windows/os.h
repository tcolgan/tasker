// os.h

#ifndef _OS_H_
#define _OS_H_

#include "Windows.h"
#include "WinBase.h"

#include <stdint.h>

void milliSleep( int milliseconds ) ;
uint64_t getTimeUSec() ;

#endif // _OS_H_

