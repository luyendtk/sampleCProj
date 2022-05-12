/*
 * stringAll.c
 *
 *  Created on: May 10, 2022
 *      Author: vbe_luyendangtk
 */
# include <stdio.h>

void swapNo(int *x, int *y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

/*
int main() {
	int num1, num2;
	printf("Enter value of Number #1: \t");
	scanf("%d", &num1);
	printf("Enter value of Number #2: \t");
	scanf("%d", &num2);
	// display before swapping
	printf("before swapping: \t Number #1 = %d \t Number #2 = %d \n", num1, num2);
	// calling the user defined function swap
	swapNo(&num1, &num2);
	// display after swapping
	printf("after swapping: \t Number #1 = %d \t Number #2 = %d \n", num1, num2);
	return 0;
}
 */
