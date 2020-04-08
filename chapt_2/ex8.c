#include <stdio.h>

/*
Write a program that calculates the remaining balance on a loan 
after the first, second, and third monthly payments:

Enter amount of loan: 20000.00
Enter interest rate: 6.0
Enter monthly payment: 386.66

Balance remaining after first payment: $19713.34
Balance remaining after second payment: $19425.25
Balance remaining after third payment: $19135.71 

Hint: Each month, the balance is decreased by the amount of the payment,
but increased by the balance times the monthly interest rate.
To find the monthly interest rate, convert the interest rate
entered by the user to a percentage and divide it by 12.
*/

int main(void)
{
  float current_balance;
  printf("Enter amount of loan:\n$");
  scanf("%f", &current_balance);

  float interest;
  printf("Enter interest rate: \n");
  scanf("%f", &interest);
  interest = interest/100.00; 

  float monthly_interest = interest/12.00;

  float monthly_payment;
  printf("Enter monthly payment: \n");
  scanf("%f", &monthly_payment);

  printf("\n");
  
  current_balance = ( (current_balance - monthly_payment) + (current_balance * monthly_interest) ); 
  printf("Balance remaining after first payment: $%.2f\n", current_balance);

  current_balance = ( (current_balance - monthly_payment) + (current_balance * monthly_interest) ); 
  printf("Balance remaining after second payment: $%.2f\n", current_balance);

  current_balance = ( (current_balance - monthly_payment) + (current_balance * monthly_interest) ); 
  printf("Balance remaining after third payment: $%.2f\n", current_balance);
  
  return 0;
}


