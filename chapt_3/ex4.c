#include <stdio.h>

/*
Write a program that promps the user to enter a telephone number in 
the form (xxx) xxx-xxxx and then displays the number in the form
xxx.xxx.xxx

Enter phone number [(xxx) xxx-xxxx] : (404) 817-6900
You entered 404.817.6900

*/

int main(void) 
{
  int area_code, middle, last;

  printf("Enter phone number [(xxx) xxx-xxxx]: ");
  scanf("(%d) %d-%d", &area_code, &middle, &last); // You do not need & sign for strings in C

  printf("You entered %d.%d.%d\n\n", area_code, middle, last);

  return 0;
}
