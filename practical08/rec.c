#include <stdio.h>
#include <stdlib.h>

//Constructing main to recursively solve for the gcd of two values.

int main(){
	int a,b,gcd;

	//Taking user input for a and b.

	printf("Please input the numbers you wish to find the gcd of: \n");
	scanf("%d %d",&a, &b);
	
	//Passing values to rec() to calculate the gcd recursively.

	gcd = rec(a,b);
	printf("The gcd of %d and %d is %d \n", a, b, gcd);	


	return 0;
}

//Constructnig function to recursively calculate the gcd.

int rec(int a, int b){
        int temp;
        if(b == 0){
                return a;
        }
        else{
                return rec(b, a%b);
        }
}

