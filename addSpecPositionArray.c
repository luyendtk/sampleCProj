/*
 * addSpecPosition.c
 *
 *  Created on: May 10, 2022
 *      Author: vbe_luyendangtk
 */

/*
int main () {
	printf("Enter Size of 2D Array input: \t");
	int sizeArr;
	scanf("%d", &sizeArr);
	int arrIn[sizeArr];
	int arrNew[sizeArr+1];
	for (int idx = 0; idx < sizeArr; idx++) {
		printf("Array[%d]: \t", idx);
		scanf("%d", &arrIn[idx]);
	}
	printf("Your Old Array: \t");
	for (int idx = 0; idx < sizeArr; idx++) {
		printf("%d \t", arrIn[idx]);
	}
	int specNum, index;
	printf("Enter a number to Insert: \t");
	scanf("%d", &specNum);
	printf("Enter a position where to insert (from #0): \t");
	scanf("%d", &index);
	for (int i = 0, j = 0; i < sizeArr; i++, j++) {
		if (i == index) {
			arrNew[i] = specNum;
			j++;
		}
		arrNew[j] = arrIn[i];
	}
	printf("Your New Array: \t");
	for (int idx = 0; idx < (sizeArr+1); idx++) {
		printf("%d \t", arrNew[idx]);
	}
	return 0;
}
*/
