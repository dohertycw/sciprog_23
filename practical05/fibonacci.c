#include <stdio.h>
#include <stdlib.h>

//intialising fib function to calulate the Fibonacci series and main.

void fib(int *Fn1, int *Fn2);

int main(void){

	//intialising variables.

	int n, i, F0=0, F1=1;

	//Request a user input value for that is a real, positive integer. If n is neither real or positive then the function terminates.

	printf("Please enter a positive integer:\n");
	scanf("%d", &n);
	if(n<1){
		printf("%d is not a positive integer.\n", n);
		exit(1);
	}

	//Printing the Fibonacci sequence for the input value of n.

	printf("The Fibonacci sequence for n = %d is:\n", n);
	printf("%d\n%d\n", F0, F1);

	//Using a for-loop the Fibonacci sequence for n is generated.

	for(i=2; i<=n; i++){
		fib(&F1, &F0);
		printf("%d\n", F1);
	}

	return 0;
}

//Constructing the fib function to generate each value of the Fibonacci sequence up to n.

void fib(int* Fn1, int *Fn2){
	int Fn;
	Fn = *Fn1 + *Fn2;
	*Fn2 = *Fn1;
	*Fn1 = Fn;
}
