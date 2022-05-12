/*
 * extractSubfromStr.c
 *
 *  Created on: May 11, 2022
 *      Author: vbe_luyendangtk
 */

#include <stdio.h>
#include <string.h>

# define STRING_MAX_LEN 100

int extractSubFromSring(int fromS, int toS, char *stringIn, char *subStringIn) {
	int lengthS = strlen(stringIn);
	if (fromS > lengthS || fromS < 0) {
		printf("The index 'from' is invalid \n");
		return 1;
	}
	if (toS > lengthS) {
		printf("The index 'to' is invalid \n");
		return 1;
	}
	int j = 0;
	for (int i = fromS; i <= toS; i++) {
		subStringIn[j] = stringIn[i];
		j++;
	}
	subStringIn[j] = '\0';
	return 0;
}
/*
int main () {
	char strings [STRING_MAX_LEN];
	char subStrings [STRING_MAX_LEN];
	int frmS, toS;
	printf("Enter a String (max length = 100): \t");
	fgets(strings, STRING_MAX_LEN, stdin);
	printf("Enter the index 'from': \t");
	scanf("%d", &frmS);
	printf("Enter the index 'to': \t");
	scanf("%d", &toS);
	printf("The String is: %s \n", strings);
	if (extractSubFromSring(frmS, toS, strings, subStrings) == 0) {
		printf("The Sub-String is: %s \n", subStrings);
	} else {
		printf("OPWWS! ERROR! \n");
	}
	return 0;
}
*/
