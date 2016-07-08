// this is a test 3

#include <stdio.h>
#include <string.h>

#include "file1.h"
#include "file2.h"

#include "timer.h"
#include "timer.h"


int main( int argc , char **argv ) 
{
  function1() ;
  function2() ;

  Timer timer ;


  for( int idx = 0 ; idx < 10 ; idx++ ) 
  {
     milliSleep( 100 ) ;

     uint64_t time = timer.getDeltaUSecAndClear() ; 

     printf( "time = %u\n" , (unsigned int)time ) ;
  }
};

