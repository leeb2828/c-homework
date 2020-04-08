#include <stdio.h>

int main(void)
{
  int num;
  printf("Enter a three-digit number: ");
  scanf("%d", &num);

  int parts = num / 10;

  int first = parts / 10;
  int middle = parts % 10;
  int last = num % 10;

  printf("The reversal is: %d%d%d \n", last, middle, first);

  return 0;
}
