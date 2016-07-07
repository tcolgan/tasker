// os.c

#include "os.h"
#include <ctime>
#include <unistd.h>

uint64_t getTimeUSec() 
{
   struct timespec ts;

   clock_gettime( CLOCK_MONOTONIC, &ts );

   unsigned long long ticks = ts.tv_sec * 1000000; // convert seconds to microseconds
   ticks += ts.tv_nsec / 1000;                     // convert nanoseconds to microseconds and add

   return ticks;
}


void milliSleep( int milliseconds )
{
   usleep( 1000 * milliseconds ) ;
}





