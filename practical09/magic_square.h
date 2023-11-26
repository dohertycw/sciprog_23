#include <stdio.h>

//Initialising function to check if a given matrix is 'magic' or not.

int isMagicSquare(int ** square, const int n) {

    // Eliminate the case where 'n' is negative
    if(n < 0) {
        return 0;
    }

    // M is the sum of every row, column,
    // and the main and secondary diagonals.
    // This can be obtained from n of an n x n square matrix.
    
    int M = (n * (n*n + 1))/2;
    printf("M = %d \n", M);

    //Constructing for-loop to calculate the sum of each row and column in the given matrix.

    int i, j;
    for(i = 0; i < n; i++){
 	int sumR = 0;
	int sumC = 0;
	for(j = 0; j < n; j++){
		sumR += square[i][j];
		sumC += square[j][i];
	}
	
	printf("i = %d, row sum = %d, column sum = %d \n", i, sumR, sumC);

	//Constructing if-statement to check if the sum of columns and rows is equal to M, else returning 0.

	if(sumR != M || sumC != M){
		return 0;
	}
	}

    // Constructing for-loop to calculate the sum of the given matrix's diagonal and secondary diagonal.
    
    int sumD = 0;
    int sumD2 = 0;
    for(i = 0; i < n; i++){
	sumD += square[i][i];
	sumD2 += square[i][n - i -1];
    }
    printf("Diagonal sum = %d, second diagonal sum = %d \n", sumD, sumD2);

    //Another if-statement to check if the sums of diagonal and second diagonal are equal to M.

    if(sumD != M || sumD2 != M){
	return 0;
    }
    
    //If both if-statements are satisfied, given matrix is a magic square.

    return 1;
}

