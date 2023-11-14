This folder includes my files for practical 7.

It includes two C files.

exp.c requests user input for a value of n, which is passed to a function to dynamically generate an array of size n. This array is then filled with approximations of e from the 0th order to the nth order, with each approximation being printed. The difference between each order and an approximately known value of e is computed and then printed.

pm.c contains functions constructed as requested. In main, the user inputs a value of n. In allocatearray(), an integer array of size n is generated. In fillwithones(), an integer array of size n has each entry given value 1. In printarray(), each element of an integer array of size n is printed. In deallocate(), the memory allocated to an array is freed. In main, each of these functions are called, with an array being generated with allocatearray(), passed to fillwithones(), printed with printarray() and then removed with deallocate().

In order to run these files, run the bash script:
        gcc -o <executable_name> exp.c -lm
and
	gcc -o <executable_name> pm.c -lm
where <executable_name> is an executable name of your choice, to compile the programmes and then
        ./<executable_name>
to run them.
Within the c file are comments explain how the code works.