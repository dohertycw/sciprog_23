#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//initialising necessary extra functions and global variable delta

double artanh1(const double x, const double delta);
double artanh2(const double x);
float delta;

//initialising main

int main(void){

	//initialising variables for main

	double delta, x;

	//Requesting a user-inputted value of delta that is real and positive, then taking it via scanf. If the value provided is either not
	//real or positive the programme terminates.

	printf("Please enter a degree of precision. Ensure it is a real, positive number:\n");
	scanf("%lf", &delta);
	if(delta<0){
		printf("%f is not a positive, real value.\n", delta);
		exit(1);
	}

	//initiliasing arrays to store values for artanh1 and artanh2. As with steps of 0.01 between -0.9 and 0.9 there are only 180 values,
	//I've set the length to 200. Here mean and total are initialised to get an average difference between methods.

	int length = 200;
	double arc1[length];
	double arc2[length];
	double total = 0;
	double mean;

	//Creating a while loop to generate values of arctanh with both methods, storing results within our two arrays, calculating the
	//total difference between each iteration, printing results and then iterating x in steps of 0.01 as required and j in steps of 1.

	int j = 0;
	x = -0.9;
	while(x<=0.9 && j< length){
		arc1[j]=artanh1(x, delta);
		arc2[j] = artanh2(x);
		total = total + fabs(arc1[j] - arc2[j]); 
		printf("The difference between methods is %.10lf at x = %lf \n", fabs(arc1[j] - arc2[j]), x);
		j++;
		x = x + 0.01;
	}

	//Calculating the mean difference between methods and printing.
	
	mean = total/j;
	printf("The mean difference between methods is %.10lf \n", mean);

	return 0;
}

//artanh1 is constructed to calculate arctanh(x) via a Maclaurin series.

double artanh1(const double x, const double delta){
	
	//initialising variables.

	double arcTan = 0 ;
	double elem, val;
	int n = 0;

	//using a do-while loop to sum the series until its absolute value is less than or equal to delta, and then returning the value of
	//arctanh(x)

	do{
		val = 2*n + 1;
		elem = pow(x, val)/val;
		arcTan += elem;
		n++;
	} while(fabs(elem)>=delta);
	
	return arcTan;	
}

//artanh2 is constructed to return arctanh(x) using the ln method.

double artanh2(const double x){
	return (1/2)*(log(1 + x) - log(1 - x));
}
