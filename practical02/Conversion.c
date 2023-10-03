#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {

/* Declare variables */
   int i,inum,tmp,numdigits;
   float fnum,test;
   char binnum[60];

/* Intialise 4-byte integer */
   inum = 33554431;
/* Convert to 4-byte float */
   fnum = (float) inum;


/* Convert to binary number (string)*/
   i = 0; tmp = inum;
   while (tmp > 0) {
     sprintf(&binnum[i],"%1d",tmp%2);
     tmp = tmp/2;
     i++;
   }

/* Terminate the string */
   binnum[i] = '\0';
       

/* Complete the expression */
   numdigits = ceil(i);
   printf("The number of digits is %d\n",numdigits);

/*Using C's log function as requested*/
   test = log(2);

   printf("inum=%d,  fnum=%f, inum in binary=%s \n, logarithim test=%f \n", 
      inum,fnum,binnum,test);

}
