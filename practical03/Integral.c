#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
	
	// Initialising variables.
	
	int i;
	float a, b, sum, x, fn, integral;
	a = 0.0; b = (M_PI/3);
	sum = tan(a) + tan(b);

	// Calculating 11 equidistant x values using a for-loop.
	
	i = 0;
	x  = 0.0;
	fn = 0.0;
	for(i = 1; i<12; i++) {
		x = i*((M_PI/3)/12);

		// Inserting the generated x values into C's tan function.

		fn  = fn + 2*tan(x);
	}

	// Calculating integral via the Trapezoidal Rule and printing the result.

	integral = ((b-a)/(2*i))*(fn + sum);
	printf ("Our integral is %f \n", integral);
}
