This folder includes my files for practical 5.

fibonacci.c contains two functions, main and fib.
The fib function calculates the Fibonacci series for input values of (Fm - 1) and (Fm - 2) and outputs new values for Fm and (Fm - 1). 
The main function requests a positive integer value for n from the user and uses a for-loop and the fib function to generate values for each Fm up to n and print the Fibonacci series up to n.

arctanh.c contains three functions, main, artanh1 and artanh2.
artanh1 calculates the Maclaurin series approximation for arctanh(x) using a do-while loop, up to a user input degree of precision delta.
artanh2 calculate the natural logarithimic approximation for arctanh(x) using C's built in log function.
The main function requests a real, positive value for delta from the user. It then uses a while-loop to calculate values for arctanh(x) using each method from x = -0.9 to x = 0.9 in steps of 0.01, printing the difference between methods at each step and calculating the total difference. The mean difference is then also printed.

In order to run these files, run the bash script:
        gcc -o <executable name> fibonacci.c -lm
and
	gcc -o <executable name> arctanh.c -lm
to compile the programmes, where <executable_name> is an executable name of your choice, and then
        ./<executable name>
to run them.
Within the c file are comments explain how the code works.
