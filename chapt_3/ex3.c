#include <stdio.h>

/*
Books are identified by the International Standard Book Number (ISBN). ISBNs
assigned after January 1, 2007 contain 13 digits, arranged in five groups, such
as 978-0-393-97950-3. (Older ISBNs use 10 digits.)
The first group (The GS1 prefix) is currently 978 or 979.
The GROUP IDENTIFIER specifies the language or country of origin (for example,
0 and 1 are used in English-speaking countries.) The PUBLISHER CODE identifies the
publisher (393 is the code for W.W. Norton). The ITEM NUMBER is assigned by the publisher
to identify a specific book (97950 is the code for this book). An ISBN ends with a check digit
that's used to verifiy the accuracy of the preceding digits.

Write a program that breaks down an ISBN entered by the user:

Enter ISBN: 978-0-393-97950-3
GS1 prefix: 978
Group identifier: 0
Publisher code: 393
Item number: 97950
Check digit: 3

Note: The number of digits in each group may vary; you can't assume that
groups have the lengths shown in this example. Test your program with actual 
ISBN values (usually found on the back cover of a book and on the copyright
page).

*/

int main(void)
{
  int gs1_prefix;
  int group_id;
  int pub_code;
  int item_number;
  int check_digit = 0;

  printf("Enter ISBN: ");
  scanf("%d-%d-%d-%d-%d", &gs1_prefix, &group_id, &pub_code, &item_number, &check_digit);

  printf("GS1 prefix: %d\n", gs1_prefix);
  printf("Group identifier: %d\n", group_id);
  printf("Publisher code: %d\n", pub_code);
  printf("Item number: %d\n", item_number);
  printf("Check digit: %d\n\n", check_digit);

  return 0;
}
