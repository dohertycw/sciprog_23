#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {

   // Declaring variables
   int i,inum,tmp,numdigits;
   float fnum,test;
   char binnum[60];

   // Intialise 4-byte integer and converting to 4-byte float.

   inum = 33554431;
   fnum = (float) inum;


   // Using while-loop to convert a binary number.

   i = 0; tmp = inum;
   while (tmp > 0) {
     sprintf(&binnum[i],"%1d",tmp%2);
     tmp = tmp/2;
     i++;
   }

   // Terminating string.

   binnum[i] = '\0';
       

   // Printing the number of digits in the binary number.

   numdigits = ceil(i);
   printf("The number of digits is %d\n",numdigits);

   // Using C's log function as requested.

   test = log(2);

   // Printing the integer, float and binary numbers and the results of testing the logarithm function.

   printf("inum=%d,  fnum=%f, inum in binary=%s \n, logarithim test=%f \n", 
      inum,fnum,binnum,test);

}
