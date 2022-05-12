/*
 * arrayPtrInStruct.c
 *
 *  Created on: May 11, 2022
 *      Author: vbe_luyendangtk
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SUM_OF_COMP 2

struct employee {
	int no;
	char name[25];
	char department[10];
	int yearExp;
};

void remove_newline_ch(char *line) {
	int new_line = strlen(line) -1;
	if (line[new_line] == '\n')
		line[new_line] = '\0';
}

void clearInputBuffer(char* string, int sizeOfAlloc) {
	int length = strlen(string);
	if (length + 1 < sizeOfAlloc)
		string[length - 1] = '\0';
	else if(string[sizeOfAlloc - 2] == '\n')
		string[length - 1] = '\0';
	else
		while (getchar() != '\n');
}

struct employee *ptr[SUM_OF_COMP];

int main () {
	for (int i = 0; i < SUM_OF_COMP; i++) {
		ptr[i] = (struct employee*) malloc (sizeof(struct employee));
		printf("\n------------------------------------\n");
		printf("Enter the data for Employees #%d \n", i+1);
		printf("~~~~~~~~~~~~\n");
		printf("Numerical Order (No.): ");
		scanf("%d", &ptr[i]->no);
		getchar(); // remove new line
		printf("Name:  ");
		fgets(&ptr[i]->name, sizeof(&ptr[i]->name), stdin);
		//remove_newline_ch(&ptr[i]->name);
		clearInputBuffer(&ptr[i]->name, sizeof(&ptr[i]->name));
		printf("Department:  ");
		fgets(&ptr[i]->department, sizeof(&ptr[i]->department), stdin);
		//remove_newline_ch(&ptr[i]->department);
		clearInputBuffer(&ptr[i]->department, sizeof(&ptr[i]->department));
		printf("Year Experience: ");
		scanf("%d", &ptr[i]->yearExp);
		getchar();
	}
	printf("\n====================================================================== \n");
	printf("DETAILS OF EMPLOYEES \n");
	for (int i = 0; i < SUM_OF_COMP; i++) {
		printf("\n~~~~~~~~~~~~\n");
		printf("No.: %d \n", ptr[i]->no);
		printf("Name: %s \n", ptr[i]->name);
		printf("Department: %s \n", ptr[i]->department);
		printf("Year Experience: %d \n", ptr[i]->yearExp);
	}
	for (int i = 0; i < SUM_OF_COMP; i++) {
		free(ptr[i]);
	}
	return 0;
}
