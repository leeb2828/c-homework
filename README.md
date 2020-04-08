These are all the assignments I completed from from the book
"C Programming - A Modern Approach", Second Edition by K.N. King. <br />
<br />
<p align="center">How to run any of the C programs</p>
First, confirm that your C compiler is working. Inside your terminal, type<br />
$ cc --version<br />
or<br />
$ gcc --version
<br /><br />
If your C compiler is not working (Mac OSX)<br /> 
- Download the latest XCode from Apple.
<br /><br />
If your C compiler is not working (Windows)<br />
- The easiest thing to do is to look into using VirtualBox to install a version of Linux, and run a complete Linux system on your computer.<br />
- There is also the CodeBlocks IDE available for Windows.
<br /><br />
Running a C program from the terminal<br />
- First, you want to compile it. Here is how you would compile (for example, a helloworld.c file) <br />
$ cc helloworld.c <br />
- This will produce an a.out file. Run the a.out file from the terminal. <br />
$ ./a.out
<br />
Another way to run helloworld.c from the terminal: <br />
$ cc -o helloworld helloworld.c<br />
- This will produce a helloworld file. Run it from the terminal. <br />
$ ./helloworld
