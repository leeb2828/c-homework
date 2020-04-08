#include <stdio.h>

/*
Modify the addfrac.c program of section 3.2 so that the user enters 
both fractions at the same time, separated by a plus sign:

Enter two fractions separated by a plus sign: 5/6+3/4
The sum is 38/24
*/

int main(void)
{
  int num1, denom1;
  int num2, denom2;
  int final_num, final_denom;

  printf("Enter two fractions separated by a plus sign: ");
  scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);

  final_num = (num1 * denom2) + (num2 * denom1);
  final_denom = denom1 * denom2;

  printf("The sum is %d/%d \n", final_num, final_denom);

  return 0;
}
