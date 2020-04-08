#include <stdio.h>

int main(void)
{
  int user_input;
  printf("When you enter a number, it must be positive and around 1-4 digits long.\n");
  printf("Enter a number: \n");
  scanf("%d", &user_input);

  int num_of_digits;

  if (user_input <= 9)
    num_of_digits = 1;
  else if (user_input > 9 && user_input < 100)
    num_of_digits = 2;
  else if (user_input > 99 && user_input < 1000)
    num_of_digits = 3;
  else 
    num_of_digits = 4;


  printf("The number %d has %d digits. \n", user_input, num_of_digits);

  return 0;
}
