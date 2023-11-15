#include <stdio.h>
#include <stdlib.h>

//Constructing main function to calculate the gcd of two integers a and b.

int main(void){
	int a, b, gcd;

	//Taking user input for the values to find the gcd of.
	
	printf("Please input integer values to find the gcd of: \n");
	scanf("%d", &a);
	scanf("%d", &b);

	//Passing to iterative function and printing answer.

	gcd = it(a,b);
	
	printf("The gcd of %d and %d is %d \n", a, b, gcd);
	return 0;
}

//Constructing function to iteratively solve for the gcd.

int it(int a, int b){
	int temp;
	while (b != 0){
		temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
