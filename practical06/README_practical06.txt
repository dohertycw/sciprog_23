This folder includes my files for practical 6.

It includes two C files and one Makefile.

main.c uses for loops to generate matrices A and B and print them, and then uses function matmult in file matmult.c to multiply matrices A and B to create matrix C. Matrix C is then printed.

matmult.c uses a for loop to generate an empty nxq matrix, and then for each entry multiplies the corresponding results of A*B and places it in matrix C via addition.

Makefile generates object (.o) files from the .c files and compiles them into one executable, matmultc. Inside is a 'clean' section to be utilised with 'make clean' to remove object files or alternatively a rm executable that will automatically remove object files.

In order to compile these files, run the bash script:
        make
and then
        ./matmultc
to run it.
Within the c file are comments explain how the code works.