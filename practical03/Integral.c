#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
	//Testing to use the tan function within C.
	int i;
	float a, b, sum, x, fn, integral;
	a = 0.0; b = (M_PI/3);
	sum = tan(a) + tan(b);
	printf("Our test sum gives %f \n", sum);

	//Generating 11 equidistant x values.
	i = 0;
	x  = 0.0;
	fn = 0.0;
	for(i = 1; i<12; i++) {
		x = i*((M_PI/3)/12);
		//Inserting the generated x values into our tan function.
		fn  = fn + 2*tan(x);
	}
	//Generating our integral via the Trapezoidal Rule
	integral = ((b-a)/(2*i))*(fn + sum);
	printf ("Our integral is %f \n", integral);
}
