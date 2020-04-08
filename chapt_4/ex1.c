#include <stdio.h>

/*
Write a program that asks the user to enter a two-digit number, then prints the 
number with its' digits reversed. A session with the program should have the following appearance:
Enter a two-digit number: 28
The reversal is: 82
Read the number using %d, then break into two digits. Hint: if n is an integer, 
then n % 10 is the last digit in n and n/10 is n with the last digit removed.
*/

int main(void)
{
  int num;
  printf("Enter a two-digit number: ");
  scanf("%d", &num);

  int part_one = num / 10; // first digit
  int part_two = num % 10; // last digit

  printf("The reversal is: %d%d \n", part_two, part_one);

  return 0;
}
