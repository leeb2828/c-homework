<p align="center">Programming Assignments</p>

<span>1.</span>
Write a program that asks the user to enter a two-digit number, then prints the number with its' digits reversed. A session with the program should have the following appearance:<br />
Enter a two-digit number: 28<br />
The reversal is: 82<br />
Read the number using %d, then break into two digits. Hint: if n is an integer, then n % 10 is the last digit in n and n/10 is n with the last digit removed.

<br />

<span>2.</span>Extend the program in Programming Project 1 to handle three-digit numbers.

<br />

<span>3.</span>Rewrite the program in Programming Project 2 so that it prints the reversal of a three-digit number without using arithmetic to split the number into digits. Hint: See the upc.c program of Section 4.1

<br />

<span>4.</span>Write a program that reads an integer entered by the user and displays it in octal (base 8):<br />
Enter a number between 0 and 32767: 1953<br />
In octal, your number is: 03641<br />
<br />
The output should be displayed using five digits, even if fewer digits are sufficient. Hint: To convert the number to octal, first divide it by 8; the remainder is the last digit of the octal number (1, in this case). Then divide the original number by 8 and repeat the process to arrive at the next-to-last digit. (printf is capable of displaying numbers in base 8, as we'll see in chapter 7, so there's actually an easier way to write this program.)

<br />

<span>5.</span>Rewrite the upc.c program of Section 4.1 so that the user enters 11 digits at one time, instead of entering one digit, then five digits, and then another five digits.<br />

Enter the first 11 digits of a UPC: 01380015173<br />
Check digit: 5

<br />

<span>6.</span>European countries use a 13-digit code, known as a European Article Number (EAN) instead of the 12-digit Universal Product Code (UPC) found in North Americal. Each EAN ends with a check digit, just as a UPC does. This technique for calculating the check digit is also similiar:<br />
<br />
Add the second, fourth, dixth, eighth, tenth, and twelfth digits.<br />
Add the first, third, fifth, seventh, ninth, and eleventh digits.<br />
Multiply the first sum by 3 and add it to the second sum.<br />
Subtract 1 from the total.<br />
Compute the remainder when the adjusted total is divided by 10.<br />
Subtract the remainder from 9.<br />

For example, consider Gulluoglu Turkish Delight Pistachio & Coconut, which has an EAN of 8691484260008. The first sum is 6 + 1 + 8 + 2 + 0 + 0 = 17, and the second sum is 8 + 9 + 4 + 4 + 6 + 0 = 31. Multiplying the first sum by 3 and adding the second yields 82. Subtracting 1 gives 81. The remainder upon diving by 10 is 1. When the remainder is subtracted from 9, the result is 8, which matches the last digit of the original code. Your job is to modify the upc.c program of Section 4.1 so that it calculates the check digit for an EAN. The user will enter the first 12 digits of the EAN as a single number.<br />

Enter the first 12 digits of an EAN: 869148426000<br />
Check digit: 8