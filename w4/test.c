#include<stdio.h>

#define MIN_YEAR 2010
#define MAX_YEAR 2021

char * getMonth(int monthInNumber) {
  switch(monthInNumber) {
    case 1:
      return "JAN";
    case 2:
      return "FEB";
    case 3:
      return "MAR";
    case 4:
      return "APR";
    case 5:
      return "MAY";
    case 6:
      return "JUN";
    case 7:
      return "JUL";
    case 8:
      return "AUG";
    case 9:
      return "SEPt";
    case 10:
      return "OCT";
    case 11:
      return "NOV";
    default:
      return "DEC";
  }
}

int main(void) {
  const int JAN = 1, DEC = 12;
  int year, month;
  int flag = 1;


  while(flag > 0) {
    printf("Set the year and month for the well-being log (YYYY MM): ");
    scanf("%d %d", &year, &month);
    if(year > MAX_YEAR || year < MIN_YEAR) {
      printf("ERROR: The year must be between 2010 and 2021 inclusive\n");
    } else if(month < JAN || month > DEC) {
      printf("ERROR: Jan.(1) - Dec.(12)\n");
    } else {
      printf("*** Log date set! ***\nLog starting date: %d-%s-01\n", year, getMonth(month));
      flag = 0;
    }
  }

  return 0;
}
