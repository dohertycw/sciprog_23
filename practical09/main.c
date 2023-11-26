#include <stdio.h>
#include <stdlib.h>
#define MAX_FILE_NAME 100
#include "magic_square.h"

int getlines(char filename[MAX_FILE_NAME]);

int main(){  

    //define our file variable
    FILE *f;  
    char filename[MAX_FILE_NAME];
    printf("Enter file name: ");
    scanf("%s", filename);
    
    // ##! n function which gets the number of lines
    int n = getlines(filename);

    //Defining 'f' as the file for code to interact with.

    f = fopen(filename, "r");

    //If no file pointer is returned to f, an error statement is generated.

    if(f == NULL){
	printf("Unable to open file \n.");
	exit(1);
    }

    //Constructing for-loop to allocate matrix to store given data as an array of pointers.
    //Each pointer is a row.
    
    int i;
    int **magic = malloc(n*sizeof(int*));
    for( i = 0; i < n; i++){
	magic[i] = malloc(n*sizeof(int));
    }

    // Inputting data from given file into generated matrix.

    int j;
    for( i = 0; i < n; i++){
        for(j = 0; j < n; j++){
           fscanf(f, "%d", &magic[i][j]);
           printf("%d \t", magic[i][j]);
        }
    printf("\n");
    }
    printf("The square %s magic.\n", isMagicSquare(magic, n)? "is" : "is NOT");

    //Constructing for-loop to free each row of the matrix.

    for(i = 0; i < n; i++){
	free(magic[i]);
    }

    //Freeing entire array.
    
    free(magic);

    //Closing file.

    fclose(f);


    return 0;
}  

//Constructing function to obtain the number of lines in the input file. 

int getlines(char filename[MAX_FILE_NAME]) {
    FILE *fp;
    fp = fopen(filename, "r");
    
    int ch_read;
    int count = 0;

    //While-loop containing if-loop to count the number of lines in given file from start to end.

    while( (ch_read = fgetc(fp)) != EOF)
    {
        if (ch_read == '\n'){
            count++;
        }
    }

    //Printnig number of lines and returning value to main.

    printf("No. lines, %d\n", count);
    fclose(fp); 
    return count;
}
