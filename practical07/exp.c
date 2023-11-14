#include <stdlib.h>
#include <stdio.h>
#include <math.h>

//Constructing function to dynamically allocate an array of size n, n input by user.

double *dynarray(int n){
	double *p;

	//Assigning p to be a double array with assigned memory n*[byte size per double]

	p = (double *) malloc(n * sizeof(double));
	return p;
}

//Constructing function to calculate the factorial of a given value, i.

double factorial(int i){

	int j;
	int fac = 1;

	for(j = 1; j <= i; j++){
		fac *= j;
	}
	return fac;
}
		 

//Constructing main

int main(){
	int n, i;

	//Requesting a user-defined order, n.

	printf("Please enter the order of polynomial required: \n");
	scanf("%d", &n);

	//Allocating p (as ordering goes from 0 - n, n+1 is allocated to accomodate n orders) and initialising e.

	double *p;
	double exp = 0.0;
	p = dynarray(n+1);

	for(i = 0; i <= n; i++){
		double den = factorial(i);

		//Calculating and storing e.

		exp += 1/den;
		p[i] = exp;

		//Finding the difference between an approximate value of e and the n-th order of e calculated here. This value is then printed.	

		double diff = 2.71828 - p[i];
	        printf("The difference between the %d order approximation and e is approximately %lf \n", i, diff);
	}

	//Memory allocated to p is then restored and p set to be empty.

	free(p);
	p = NULL;
	
	return 0;
}
