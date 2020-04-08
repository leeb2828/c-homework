#include <stdio.h>

/*
Write a program that formats product information entered by the user.
A session with the program should look like this:

Enter item number: 583
Enter unit price: 13.5
Enter purchase date: (mm/dd/yyyy): 10/24/2010

Item		Unit		Purchase
			Price		Date
583			$  13.50    10/24/2010

The item number and date should be left justified; the unit price should be 
right justified. Allow dollar amounts up to $9999.99. Hint: Line up the columns.
*/

int main(void)
{
  int item_number;
  float unit_price;

  int month;
  int day;
  int year;

  printf("Enter item number: ");
  scanf("%d", &item_number); // you don't need the & sign for strings(array of chars) in scanf

  printf("Enter unit price: ");
  scanf("%f", &unit_price);

  printf("Enter purchase date: (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &day, &year);

  printf("\nItem\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");
  printf("%d\t\t$%7.2f\t%.2d/%.2d/%d\n\n", item_number, unit_price, month, day, year);
  
  /*
  %5.3d -> Displays in decimal form, minimum of 5 characters and minimum of 3 digits.
  If minimum is not met, spaces will be added to the left
  or zeroes will be added to the number. For example, 40 becomes 040

  %10.3f -> 10 characters minimum with 3 digits AFTER the decimal point. If minimum is not
  met, spaces will precede the number.
  */

  return 0;

}
  
