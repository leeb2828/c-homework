#include <stdio.h>

/*
Write a program that asks the user to enter a dollar-and-cents 
amount, then displays the amount with 5% tax added!
*/

#define TAX .05

int main(void)
{
  float dollars;
  printf("Enter total dollars and cents in (XX.XX) format\n$");
  scanf("%f", &dollars);
  
  printf("Total amount with added tax: $%.2f\n", ((TAX * dollars) + dollars) );
  
  return 0;
}
