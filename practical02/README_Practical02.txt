This folder includes my files for practical 2.

Sum.c generates two sums using for loops and then checks the difference between each sum.
Conversion.c takes a given integer, converts it to a float, then to a binary string. It then counts the number of digits in the binary string and prints it.

In order to run these files, run the bash script:
	gcc -o <executable name 1> Sum.c -lm
and
	gcc -o <executable name 2> Conversion.c -lm
to compile the programmes, where <executable name 1/2> are executable names of your choice, and then
	./<executable name 1/2>
to run them. 
Within each c file are comments explain how the code works.
