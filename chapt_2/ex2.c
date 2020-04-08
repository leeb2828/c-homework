#include <stdio.h>

/*
Write a program that computes the volume of a sphere with a 10-meter
radius, using the formula v = 4/3πr^3 . 

Write the fraction 4/3 as 4.0f/3.0f. (Try writing it as 4/3. What happens?) 
Hint: C doesn't have an exponentiation operator, so you'll need to 
multiply r by itself twice to compute r^3.

Afterwards, modify the program so that it prompts the user to enter
the radius of the sphere.
*/

// macro definition (also called a "constant" or "preprocessing directive")
#define PI 3.14159

int main(void) 
{
  int radius;
  printf("Enter the radius for the sphere: ");
  scanf("%d", &radius);

  float volume = (4.0f/3.0f * PI) * (float)(radius * radius * radius);
  printf("The volume is %.2f\n", volume);

  return 0;
}
