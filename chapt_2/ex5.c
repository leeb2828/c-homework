#include <stdio.h>

/*
Write a program that asks the user to enter a value
for x and then displays the value of the following polynomial:

3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6

Hint: C doesn't have an exponentiation operator, so you'll need to
multiply x by itself repeatedly in order to compute the powers of x.
For example, x * x * x is x cubed.

Vim reference: linux4one.com/how-to-copy-cut-paste-in-vim-or-vi/
*/

int main(void)
{
  int value;

  printf("Polynomial: 3x^3 + 2x^4 - 5x^3 - x^2 + 7x - 6 \n");
  printf("Enter an integer for the value of x: \n");
  scanf("%d", &value);
  
  int first = (3 * (value * value * value * value * value) );
  int second = (2 * (value * value * value * value) );
  int third = (5 * (value * value * value)  );
  int fourth = value * value;
  int fifth = 7 * value;
  int sixth = 6;

  int total = first + second - third - fourth + fifth - sixth;
  printf("The total of the polynomial is: %d \n", total);
  
  printf("Now let's do the calculation using Horner's rule!\n");
  
  int horner_rule = ((((3 * value + 2) * value - 5) * value - 1) * value + 7) * value - 6;
  printf("%d\n", horner_rule);

  return 0;
}

