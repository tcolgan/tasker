// os.c

#include "os.h"

uint64_t getTimeUSec() 
{
   FILETIME ft;
   unsigned __int64 tmpres = 0;

   GetSystemTimeAsFileTime( &ft );

   tmpres = ft.dwHighDateTime;
   tmpres <<= 32;
   tmpres |= ft.dwLowDateTime ;

   return tmpres / 10 ;
}


void milliSleep( int milliseconds )
{
   Sleep( milliseconds ) ;
}





