#include <stdio.h>

int main(void)
{
  int month1, day1, year1;
  int month2, day2, year2;
  int first, second;

  printf("Enter the first date (mm/dd/yy): \n");
  scanf("%d/%d/%2d", &month1, &day1, &year1);

  printf("Enter second date (mm/dd/yy): \n");
  scanf("%d/%d/%2d", &month2, &day2, &year2);
  
  first = (month1 * 30) + day1;
  second = (month2 * 30) + day2;

  if (year1 < year2)
    printf("%d/%d/%.2d is earlier than %d/%d/%.2d \n", month1, day1, year1, month2, day2, year2);
  
  if (year2 < year1)
    printf("%d/%d/%.2d is earlier than %d/%d/%.2d \n", month2, day2, year2, month1, day1, year1);

  else
    if (first > second)
	  printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month1, day1, year1, month2, day2, year2);
    else if (second > first)
	  printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month2, day2, year2, month1, day1, year1);
	else
	  printf("Both dates are the same");
  

  return 0;
}
