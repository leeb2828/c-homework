These are all the assignments I completed from from the book<br />
"C Programming - A Modern Approach", Second Edition<br />by K.N. King 

<br />
<br />

<h4 align="center">How to run any of the C programs</h4>

First, confirm that your C compiler is working. Inside your terminal, type

```
$ cc --version
```
or 
```
$ gcc --version
```

<br />

If your C compiler is not working (Mac OSX)
<br /> 
- Download the latest XCode from Apple.
<br />
<br />

If your C compiler is not working (Windows)
<br />
- The easiest thing to do is to look into using VirtualBox to install a version of Linux, and run a complete Linux system on your computer.<br />
- There is also the CodeBlocks IDE available for Windows.
<br />


<h4 align="center">Running a C program from the terminal</h4>

First, you want to compile it. Here is how you would compile (for example, a helloworld.c file) 
```
$ cc helloworld.c
```
This will produce an a.out file. Run the a.out file from the terminal. 
```
$ ./a.out
```
Another way to run helloworld.c from the terminal: 
```
$ cc -o helloworld helloworld.c
```
This will produce a helloworld file. Run it from the terminal. 
```
$ ./helloworld
```

