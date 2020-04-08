<p align="center">Programming Assignments</p>

<span>1.</span> Write a program that uses printf to display the following picture to the screen:
<pre>
       *
      *
     *
*   *
 * *
  *
</pre>

<span>2.</span> Write a program that computes the volume of a sphere with a 10-meter radius, using the
formula **v = 4/3πr³**. Write the fraction 4/3 as 4.0f/3.0f. (Try writing it as 4/3.
What happens?) Hint: C doesn't have an exponentiation operator, so you'll need to 
multiply r by itself three times to compute r³.

<span>3.</span> Modify the program of Programming Project 2 so that it prompts the user to enter the
radius of the sphere.

<span>4.</span> Write a program that asks the user to enter a dollars-and-cents amount, then displays
the amount with 5% tax added: <br />

&nbsp; &nbsp; &nbsp; &nbsp;Enter the amount: 100.00 <br />
&nbsp; &nbsp; &nbsp; &nbsp;With tax added: $105.00

<span>5.</span> Write a program that asks the user to enter a value for x and then displays the value
of the following polynomial:<br />
&nbsp; &nbsp; &nbsp; &nbsp;3x⁵ + 2x⁴ - 5x³ - x² + 7x - 6 <br />
> <p>Hint: C doesn't have an exponentiation operator, so you'll need to multiply x by itself repeatedly in order to compute the powers of x (For example, x * x * x is x cubed.)</p>

<span>7.</span> Write a program that asks the user to enter a U.S. dollar amount and then shows how to pay that amount using the smallest number of $20, $10, $5, and $1 bills: 

&nbsp; &nbsp; &nbsp; &nbsp;Enter a dollar amount: 93 <br />

&nbsp; &nbsp; &nbsp; &nbsp;$20 bills: 4 <br />
&nbsp; &nbsp; &nbsp; &nbsp;$10 bills: 1 <br />
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;$5 bills: 0 <br />
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;$1 bills: 3 <br />

<span>8.</span> Write a program that calculates the remaining balance on a loan after the first, second, and third monthly payments:<br />

&nbsp; &nbsp; &nbsp; &nbsp;Enter amount of loan: 20000.00 <br />
&nbsp; &nbsp; &nbsp; &nbsp;Enter interest rate: 6.0 <br />
&nbsp; &nbsp; &nbsp; &nbsp;Enter monthly payment: 386.66 <br />

&nbsp; &nbsp; &nbsp; &nbsp;Balance remaining after first payment: $19713.34 <br />
&nbsp; &nbsp; &nbsp; &nbsp;Balance remaining after second payment: $19425.25 <br />
&nbsp; &nbsp; &nbsp; &nbsp;Balance remaining after third payment: $19135.71 <br />

Display each balance with two digits after the decimal point. Hint: Each month, the balance is decreased by the amount of the payment, but increased by the balance times the monthly interest rate. To find the monthly interest rate, convert the interest rate entered by the user to a percentage and divide by 12.
