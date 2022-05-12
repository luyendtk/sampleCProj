/*
 * fileExecute.c
 *
 *  Created on: May 10, 2022
 *      Author: vbe_luyendangtk
 */

# include <stdio.h>
# include <stdlib.h>

# define DATA_SIZE 10000

/*
int main() {
	// reading a value of txt file
	int num;
	FILE *fptr;
	if ((fptr=fopen("luyendtk.txt", "r")) == NULL) {
		printf("Error File!\n");
		exit(1);
	}
	fscanf(fptr, "%d", &num);
	printf("value = %d", num);
	fclose(fptr);
	// create & write to txt file
	// simple variable to store user content
	char dataFile[DATA_SIZE];
	if ((fptr=fopen("sample_write.txt", "w")) == NULL) {
		printf("Error File!\n");
		exit(1);
	}
	// get the input from user and store it in data 3
	printf("\nEnter your text into your file: \t");
	fgets(dataFile, DATA_SIZE, stdin);
	fputs(dataFile, fptr);
	fclose(fptr);
	printf("File is create and Saved successful!\n");
	return 0;
}
*/
