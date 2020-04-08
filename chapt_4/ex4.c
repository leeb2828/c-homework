#include <stdio.h>


int main(void)
{
  int n1, n2, n3, n4, n5;
  int user_input;

  printf("Enter a number between 0 and 32767: ");
  scanf("%d", &user_input);
  
  /*
    - First divide it by 8; the remainder is the last digit of the octal number.
	- Divide the original number by 8 and repeat process to arrive at next to last digit.
  */
  
  n5 = user_input % 8;
  user_input /= 8;
  
  n4 = user_input % 8;
  user_input /= 8;

  n3 = user_input % 8;
  user_input /= 8;

  n2 = user_input % 8;
  user_input /= 8;
  
  n1 = user_input % 8;
  
  printf("In octal, your number is: %1d%1d%1d%1d%1d \n", n1, n2, n3, n4, n5);
  
  return 0;
}
