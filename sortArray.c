/*
 * sortArray.c
 *
 *  Created on: May 10, 2022
 *      Author: vbe_luyendangtk
 */
# include <stdio.h>

void sortArr (int sizeArr, int* ptr) {
	int temp;
	for (int i = 0; i < sizeArr; i++) {
		for (int j = i+1; j < sizeArr; j++) {
			if (*(ptr+j) < *(ptr+i)) {
				temp = *(ptr+i);
				*(ptr+i) = *(ptr+j);
				*(ptr+j) = temp;

			}
		}
	}
	printf("\nArray after sorting: \t");
	for (int i = 0; i < sizeArr; i++) {
		printf("%d \t", *(ptr+i));
	}
}

/*
int main () {
	printf("Enter Size of 2D Array input: \t");
	int sizeArr;
	scanf("%d", &sizeArr);
	int arrIn[sizeArr];
	for (int idx = 0; idx < sizeArr; idx++) {
		printf("Array[%d]: \t", idx);
		scanf("%d", &arrIn[idx]);
	}
	printf("Array before sorting: \t");
	for (int idx = 0; idx < sizeArr; idx++) {
		printf("%d \t", arrIn[idx]);
	}
	sortArr(sizeArr, arrIn);
	return 0;
}
 */
