#include <stdio.h>

/*
Write a program that asks the user to enter a U.S. dollar amount and 
then shows how to pay that amount using the smallest number of 
$20, $10, $5, and $1 bills:
Enter a dollar amount: 93
$20 bills: 4
$10 bills: 1
$5 bills: 0
$1 bills: 3
Hint: Divide the amount by 20 to determine the number of $20 bills 
needed, and then reduce the amount by the total value of the $20 bills.
Be sure to use integer values throughout, not floating-point numbers.
*/

int main(void)
{
  int twenty_bill = 20;
  int ten_bill = 10;
  int five_bill = 5;
  int one_bill = 1;

  int value;
  printf("Enter a dollar value in $XX format:\n$");
  scanf("%d", &value);
  
  int num_of_twenties = value/twenty_bill;
  value = value - (num_of_twenties * twenty_bill);
  
  int num_of_tens = value/ten_bill;
  value = value - (num_of_tens * ten_bill);

  int num_of_fives = value/five_bill;
  value = value - (num_of_fives * five_bill);

  int num_of_ones = value/one_bill;
  value = value - (num_of_ones * one_bill);

  printf("$20 bills: %d\n", num_of_twenties);
  printf("$10 bills: %d\n", num_of_tens);
  printf(" $5 bills: %d\n", num_of_fives);
  printf(" $1 bills: %d\n", num_of_ones);

  return 0;
} 
