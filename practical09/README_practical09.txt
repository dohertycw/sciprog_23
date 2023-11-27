This folder includes my files for practical 9.

It includes two files, one .c and one .h file.

magic_square.h contains a function that will check if a given matrix can be considered a 'magic square', in that the sum of all of its rows, columns, diagonal and 2nd diagonal add up to the same number, calculated from the number of rows in the matrix.

main.c opens a given file, counts the number of lines in the file and then reads the contents of the file. If the file contains an integer matrix, this is passed to the header file magic_square.h to check if it is a 'magic square'. The result is then returned.

In order to run these files, run the bash script:
        gcc -o <executable name> main.c -lm
to compile the programmes, where <executable name> is an executable name of your choice, and then
        ./<executable name>
to run them.
Within the c file are comments explain how the code works.