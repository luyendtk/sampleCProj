/*
 * samplePointer.c
 *
 *  Created on: May 11, 2022
 *      Author: vbe_luyendangtk
 */

#include <stdio.h>
/*
int main () {

	 * INT POINTER

	int i;
	printf("Enter a value of variable i: \t");
	scanf("%d", &i);
	int *ptr;
	// extract the address of variable i into the pointer
	ptr = &i;
	// print address
	printf("variable i = %d is located at %p \n", i, &i);
	printf("memory location ptr = %p is *ptr = %d \n", ptr, *ptr);
	// use the address
	*ptr += 1;
	printf("variable i = %d after *ptr+1 \n", i);
	// -----------------------------------------------------------------
	int j;
	printf("Enter a value of variable j: \t");
	scanf("%d", &j);
	int *ptr2;
	ptr2 = &j;
	// do some arithmetic
	int sum;
	sum = (*ptr) + (*ptr2);
	printf("The sum of %d & %d is %d \n", *ptr, *ptr2, sum);
	printf("the integer at location (ptr2+1) = %p is *(ptr2+1) = %d \n", (ptr2+1), *(ptr2+1));
	printf("the integer j = %d is at location %p \n", j, &j);
	// -----------------------------------------------------------------
	int *ptr3;
	if (ptr3 == NULL) {
		printf("ptr3 has been initialized to NULL \n");
	} else {
		printf("ptr3 has been initialized to %p \n", ptr3);
	}

	 * CHAR POINTER

	int m;
	printf("Enter a value of variable m: \t");
	scanf("%d", &m);
	char *charPtr;
	// make the char pointer point to the start of the integer
	charPtr = (char*) (&m);
	// extract the byte, store it in the integer n and print n
	int n;
	n = (int) *charPtr;
	printf("the first byte: %d \n", n);
	// get the next byte and print
	n = (int) *(charPtr+1);
	printf("the second byte: %d \n", n);
	// get the third byte and print
	n = (int) *(charPtr+2);
	printf("the third byte: %d \n", n);
	// get the fourth byte and print
	n = (int) *(charPtr+3);
	printf("the fourth byte: %d \n", n);

	 * Memory and Malloc

	// declare a pointer to an int
	int *p;
	// print the initial value of the pointer
	printf("initial value of pointer: %p \n", p);
	// get the space from malloc
	p = (int*) malloc (sizeof(int));
	// print the address of the memory block returned by malloc
	printf("current pointer: %p \n", p);
	// free the memory when done
	free(p);
	return 0;
}
*/
