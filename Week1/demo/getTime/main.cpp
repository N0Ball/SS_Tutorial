#include <stdio.h>
#include <time.h>
 
void getTime(void){
  time_t rawtime;
  struct tm * timeinfo;
 
  time ( &rawtime );
  timeinfo = localtime ( &rawtime );
  printf ( "The current date/time is: %s", asctime (timeinfo) );
}

int main (void){
    getTime();
    return 0;
}