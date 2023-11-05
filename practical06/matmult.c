//Initialising and constructing a matrix multiplication function, matmult, to be used in main.c via make.

void matmult(int n, int p, int q, double A[n][p], double B[p][q], double C[n][q]){
int i, j, k;

	//Multiplying A by B to generate C using for loops.

	for(i = 0; i < n; i++){
		for(j = 0; j<q; j++){
			C[i][j] = 0.0;
			for(k = 0; k < p; k++){
				C[i][j] += A[i][k]*B[k][j];
                        }
		}
	}
}
