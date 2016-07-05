// timer.c

#include "timer.h"

Timer::Timer()
{
   _base = getTimeUSec() ;
}

uint64_t Timer::getDeltaUSec() 
{
   return getTimeUSec() - _base ;
}

uint64_t Timer::getDeltaUSecAndClear() 
{
   uint64_t timeNow = getTimeUSec() ;
   uint64_t timeDelta = timeNow - _base ;
   _base = timeNow ;
   return timeDelta ;
}

