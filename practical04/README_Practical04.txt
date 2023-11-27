This folder includes my file for practical 4.

TrapRule.c contains a function to convert between degrees and radians, and a function to calculate the area under a curve using the Trapezoidal Rule. The main function in the programme generates values of tan(x) between 0 and 60 degrees using the degrees to radians function, storing these values in a global array, and then uses the Trapezoidal Rule function to calculate the area under tan(x) from 0 to 60 degrees using the values from the global array.

In order to run this file, run the bash script:
        gcc -o <executable name> TrapRule.c -lm
to compile the programme, where <executable name> is an executable name of your choice, and then
        ./<executable name>
to run it.
Within the c file are comments explain how the code works.

 
