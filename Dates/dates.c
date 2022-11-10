#include <stdio.h>
#include <time.h>

int main()
{
  time_t t = time(NULL);
  struct tm time = *localtime(&t);
//   printf("now: %d-%02d-%02d %02d:%02d:%02d\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
  printf("%d", time.tm_year+1900);
  printf("\n %d", time.tm_mon+1);
  char month[20] =  switch(time.tm_mon+1){
    case 1 :
      printf( "January");
    case 2 :
      printf( "January";
    case 3 :
      printf(  "Febuarary";
    case 4 :
      printf(  "March";
    case 5 :
      printf(  "April";
    case 6 :
      printf(  "May";
    case 7 :
      return "June";
    case 8 :
      return "July";
    case 9 :
      return "August";
    case 10 :
      return "September";
    case 11 :
      return "November";
    case 12 :
      return "December";
  }

}