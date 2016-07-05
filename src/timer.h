// timer.h

#ifndef _TIMER_H_
#define _TIMER_H_

#include "os.h"

class Timer
{
public:
   Timer();
   uint64_t getDeltaUSec() ;
   uint64_t getDeltaUSecAndClear() ;
private:
   uint64_t _base ;
};

#endif // _TIMER_H_





