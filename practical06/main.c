#include <stdio.h>

//Initialising main

int main(void){

	//Initialising all needed variables. n, p and q are the rows/columns of the matrices
	//and i, j and k are iteration variables. A, B and C are doubles and C is initialised to 0 as requested.

	int n, p, q;
	int i, j, k;
	n = 5, p =3, q=4;
	double A[n][p];
	double B[p][q];
	double C[n][q];
	C[n][q] = 0.0;

	//Generating and printing matrix A using a for-loop.

	printf("Matrix A:\n");
	for(j = 0; j<n; j++){
		for(k =0; k<p; k++){
			A[j][k] = j + k;
			printf("%3.0f ", A[j][k]);
		}
		printf("\n");
	}
	
	//Generating and printing matrix B using a for-loop.

	printf("Matrix B:\n");
        for(j = 0; j<p; j++){
                for(k =0; k<q; k++){
                        B[j][k] = j - k;
                        printf("%3.0f ", B[j][k]);
                }
                printf("\n");
        }

	//Generating matrix C via matrix multiplication in external file, matmult.

	matmult(n,p,q,A,B,C);

	//Printing matrix C using a for-loop.

	printf("Matrix C:\n");
	for(i = 0; i<n; i++){
		for(j = 0; j < q; j++){
			printf("%3.0f ", C[i][j]);
		}
		printf("\n");
	}
}
