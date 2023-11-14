#include<stdio.h>
#include<stdlib.h>

//Constructing function "allocatearray()" that dynamically generates an array of size n.

int *allocatearray(int n){
	int *p;
	p = (int *) malloc(n * sizeof(int));
	return p;
}

//Constructing function "fillwithones()" that fills a given array of size n with 1 for each entry.

void fillwithones(int *a, int n){
	int i;
	for( i = 0; i<n; i++){
		a[i] = 1;
	}
}

//Constructing function "printarray()" that prints a given array of size n.

void printarray(int *a, int n){
	int i;
	for(i = 0; i < n; i++){
		printf("a[%d]: %d\n", i, a[i]);
	}
}

//Constructing a function to deallocate memory assigned to a given array.

void deallocate(int *a){
	free(a);
}

//Constructing main function within which the function may be called.

int main(){
	int n, *a;
	
	//Rather than using predetermined array sizes, scanf is used to allow greater flexibility.

	printf("Size of array: \n");
	scanf("%d", &n);
	
	//Calling functions.

	a = allocatearray(n);
	
	fillwithones(a, n);

	printarray(a, n);

	deallocate(a);

	//Setting a = NULL to empty the pointer.

	a = NULL;
	
	return 0;
}
