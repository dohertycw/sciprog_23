#include <stdio.h>


int main(void) {
/* Declare variables */
   int i;
   float sum1, sum2, frac1, frac2, diff;
   

/* First sum */
   sum1 = 0.0;
   for (i=1; i<=1000; i++) {
     frac1 = 1/i;
     sum1 = sum1 + frac1;
   }


/* Second sum */
   sum2 = 0.0;
   for (i=1000; i>0; i--) {
      frac2 = 1/i;
      sum2 = sum2 + frac2;
   }

   printf(" Sum1=%f\n",sum1);
   printf(" Sum2=%f\n",sum2);

/* Find the difference and print */
   diff = sum1 - sum2;

   printf(" Difference between the two is %f\n",diff);
   
   if (sum1 = sum2) {
	printf("Sum1 is equal to Sum2.\n");
}

}
