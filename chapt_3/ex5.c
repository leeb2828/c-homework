#include <stdio.h>

/*
Write a program that asks the user to enter the numbers from 1 to 16 (in any order) and then displays the 
numbers in a 4 X 4 arrangement, followed by the sums of the rows, columns, and diagonals:

Enter the numbers from 1 to 16 in any order:
16  3  2  13  5  10  11  8  9  6  7  12  4  15  14  1

16  3  2  13
5 10 11 8
9  6  7  12
4  15 14 1

Row sums: 34 34 34 34
Column sums: 34 34 34 34
Diagonal sums: 34 34 34

If the row, column, and diagonal sums are all the same (as they are in this
example), the numbers are said to form a MAGIC SQUARE. The magic square shown
here appears in a 1514 engraving by artist and mathematician Albrecht Durer.
Note that the middle numbers in the last row give the date of the engraving.
*/

int main(void)
{
  int d1, d2, d3, d4;
  int d5, d6, d7, d8;
  int d9, d10, d11, d12;
  int d13, d14, d15, d16;

  int row1, row2, row3, row4;
  int col1, col2, col3, col4;
  int diag1, diag2;

  printf("Enter the numbers from 1 to 16 in any order: \n");
  scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
  	&d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10,
	&d11, &d12, &d13, &d14, &d15, &d16);

  row1 = d1 + d2 + d3 + d4;
  row2 = d5 + d6 + d7 + d8;
  row3 = d9 + d10 + d11 + d12;
  row4 = d13 + d14 + d15 + d16;

  col1 = d1 + d5 + d9 + d13;
  col2 = d2 + d6 + d10 + d14;
  col3 = d3 + d7 + d11 + d15;
  col4 = d4 + d8 + d12 + d16;

  diag1 = d1 + d6 + d11 + d16;
  diag2 = d13 + d10 + d7 + d4;

  printf("Row sums: %d %d %d %d\n", row1, row2, row3, row4);
  printf("Column sums: %d %d %d %d\n", col1, col2, col3, col4);
  printf("Diagonal sums: %d %d\n", diag1, diag2);


  return 0;
}
