#include <stdio.h>
#include <math.h>


//Initialising all necessary functions. Also making our values of tan a global variable, so it can be called anywhere. I've made radang a global variable for ease of printing and so that it can be used in the area function.
float degtorad(float degang);
float area(int N);
float tanvalues[12], radang[12];


int main(void) {
	//Initialising variables.
	int i;
	float degang, integral;
	i = 0;
	//Constructing a for-loop from 0-12. Within we go from 0 -> 60 degrees in steps of 5, convert each step to radians using our degtorad function, place the result into the tan function and storing in our tanvalues array. The result is then printed.
	for(i = 0; i<13; i++) {
		degang = i*5.0;
		radang[i] = degtorad(degang);
		tanvalues[i] = tan(radang[i]);
		printf ("The tan of %f radians is %f \n", radang[i], tanvalues[i]);
		}
	//Calling our area function to provide the area under the curve of tan(x) from 0 -> 60 degrees in steps of 5 using the Trapezoidal Rule and printing.
	integral = area(i);
	printf ("The area under tan(x) from 0 to 60 degrees is %f \n", integral);
	return 0;
}


//Constructing function to convert degrees to radians.
float degtorad(float degang) {
	//I'm using the maths library's built-in pi here to convert between degrees and radians,
        return( (M_PI * degang)/180.0 );
}

//Constructing function to calculate the area under the curve using the Trapezoidal Rule.	
float area(int N) {
	int j;
	float fn;
	fn = 0.0;
	//Constructing for-loop to get the tan values for i = [1, N-1].
	for(j = 1; j < (N-1); j++) {
		fn = fn + 2*tanvalues[j];
	}
	return( ((radang[(N-1)] - 0)/(2*(N-1))) * (tanvalues[0] + fn + tanvalues[12]));
}
	
	
