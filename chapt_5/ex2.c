#include <stdio.h>


int main(void)
{
  int hour;
  int minute;

  // Military time goes from 00:00 to 24:00

  printf("Enter a 24-hour time: \n");
  scanf("%d:%d", &hour, &minute);

  if (hour < 0 || hour > 23)
    printf("Invalid time! \n");
  else if (hour == 0)
    printf("Equivalent 12-hour time: 12:%.2d AM \n", minute);
  else if (hour > 0 && hour < 13)
    printf("Equivalent 12-hour time: %d:%.2d AM \n", hour, minute);
  else
    printf("Equivalent 12-hour time: %d:%.2d PM \n", (hour % 12), minute);

  return 0;
}
