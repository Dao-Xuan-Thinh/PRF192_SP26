#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define ROWS 3
#define COLS 3


int main() {
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	printf("\nINPUT:\n");
	int a[ROWS][COLS];
	for(int i = 0; i < ROWS; i++) {
		for(int j = 0; j < COLS; j++) {
			scanf("%d", &a[i][j]);
		}
	}



	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:

	for(int i = 0; i < ROWS; i++) {
		for(int j = 0; j < COLS; j++) {
			printf("%d ", a[j][i]);
		}
		printf("\n");
	}




	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}
