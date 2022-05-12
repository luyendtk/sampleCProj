/*
 * rmvDupArray.c
 *
 *  Created on: May 11, 2022
 *      Author: vbe_luyendangtk
 */
#include <stdio.h>

void rmvDupArr (int sizeArr, int* ptr) {
	for (int i = 0; i < sizeArr; i++) {
		for (int j = i + 1; j < sizeArr;) {
			if (*(ptr+j) == *(ptr+i)) {
				for (int k = j; k < sizeArr; k++) {
					*(ptr+k) = *(ptr+(k+1));
				}
				sizeArr--;
			} else {
				j++;
			}
		}
	}
	printf("\n Array after remove Duplicate Elements: \t");
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
	printf("Array before remove Duplicate Elements: \t");
	for (int idx = 0; idx < sizeArr; idx++) {
		printf("%d \t", arrIn[idx]);
	}
	rmvDupArr(sizeArr, arrIn);
	return 0;
}
*/
