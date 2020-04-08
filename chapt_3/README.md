<p align="center">Programming Assignments</p>

<span>1.</span> Write a program that accepts a date from the user in the form mm/dd/yyyy and then
displays it in the form yyyymmdd: <br />

&nbsp; &nbsp; &nbsp; &nbsp;Enter a date(mm/dd/yyyy): **2/17/2011**<br />
&nbsp; &nbsp; &nbsp; &nbsp;You entered the date **20110217**

<br />

<span>2.</span> Write a program that formats product information entered by the user. A session with
the program should look like this:<br />

&nbsp; &nbsp; &nbsp; &nbsp;Enter item number: 583<br />
&nbsp; &nbsp; &nbsp; &nbsp;Enter unit price: 13.5<br />
&nbsp; &nbsp; &nbsp; &nbsp;Enter purchase date (mm/dd/yyyy): 10/24/2010<br />
<pre>
Item		Unit		Purchase
		Price		Date    
583          $  13.50          10/24/2010
</pre>
The item number and date should be left justified; the unit price should be right justified. Allow dollar amounts up to $9999.99. Hint: Use tabs to line up the columns.

<br />

<span>4.</span> Write a program that prompts the user to enter a telephone number in the form
(xxx) xxx-xxxx and then displays the number in the form xxx.xxx.xxxx:<br />

Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900<br />
You entered 404.817.6900

<br />

<span>5.</span> Write a program that asks the user to enter the numbers from 1 to 16 (in any order) and then displays the numbers in a 4 by 4 arrangment, followed by the sums of the rows, columns, and diagonals:<br />

Enter the numbers from 1 to 16 in any order:<br />
16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1<br />

16  3  2  13<br />
 5 10 11   8<br />
 9  6  7  12<br />
 4 15 14   1<br />

Row sums: 34  34  34  34<br />
Column sums: 34  34  34  34<br />
Diagonal sums: 34  34<br />

If the row, column, and diagonal sums are all the same (as they are in this example),
the numbers are said to form a magic square. The magic square shown here appears in a 1514
engraving by artist and mathematician Albrecht Durer. (Note that the middle numbers in the
last row give the date of the engraving.)

<br />

<span>6.</span> Modify the addfrac.c program of Section 3.2 so that the user enters both fractions at the same time, separated by a plus sign:<br />

Enter two fractions separated by a plus sign: 5/6+3/4<br />
The sum is 38/24
