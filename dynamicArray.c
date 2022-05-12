/*
 * dynamicArray.c
 *
 *  Created on: May 10, 2022
 *      Author: vbe_luyendangtk
 */

# include <stdio.h>
# include <stdlib.h>

/*
int main () {
	int *inArray1 = NULL;
	double **inArray2 = NULL;

	int sizeArr;
	printf("Enter Size of Array input: \t");
	scanf("%d", &sizeArr);
	// dynamic using malloc
	inArray1 = (int*) malloc (sizeof(int) * sizeArr);
	// fill values
	for (int i = 0; i < sizeArr; i++) {
		inArray1[i] = i*34;
	}
	printf("\nArray #1: \t");
	int sum = 0;
	for (int i = 0; i < sizeArr; i++) {
		printf("%d \t", inArray1[i]);
		sum += inArray1[i];
	}
	printf("\nSum of Array #1 = %d", sum);
	inArray2 = (double **) malloc (sizeof(double*) * sizeArr);
	for (int i = 0; i < sizeArr; i++) {
		// for each such pointer, allocate a size sizeArr double array
		inArray2[i] = (double*) malloc (sizeof(double) * sizeArr);
	}
	// fill numbers
	for (int i = 0; i < sizeArr; i++) {
		for (int j = 0; j < sizeArr; j++) {
			inArray2[i][j] = i*j*7.47;
		}
	}
	printf("\nArray #2: \n");
	double dsum = 0;
	for (int i = 0; i < sizeArr; i++) {
		for (int j = 0; j < sizeArr; j++) {
			printf("%.2f \t", inArray2[i][j]);
			dsum += inArray2[i][j];
		}
		printf("\n");
	}
	printf("\nSum of Array #2 = %.2f\n", dsum);
	free(inArray1);
	free(inArray2);
	return 0;
}
 */
