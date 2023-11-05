#Choosing compiler and commands. Using gcc as standard and -lm to access libraries.

CC = gcc
LDFLAGS = -lm

#Generating matmultc executable.

matmultc: main.o matmult.o
	$(CC) -o matmultc main.o matmult.o $(LDFLAGS)
	#rm -f *.o 

#Uncomment before rm to remove object files (.o) automatically.

#Generating matmult.o file to be used in executable creation.

matmult.o: matmult.c
	$(CC) -c matmult.c

#Generating main.o file to be used in executable creation.

main.o: main.c
	$(CC) -c main.c

#Clean function to be used with "make clean" in bash to remove object files. If you wish, you can uncomment the line in matmultc and comment these lines so that the object files are automatically removed.

clean:
	rm -f *.o
