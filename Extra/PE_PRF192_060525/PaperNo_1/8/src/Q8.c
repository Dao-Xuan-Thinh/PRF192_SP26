#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define ROWS 3
#define COLS 3


int main() {
	system("cls");
	printf("\nINPUT:\n");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int a[ROWS][COLS];
	int flag = 0;
	
	for(int i = 0; i < ROWS; i++){
		for(int j = 0; j < COLS; j++){
			if(scanf("%d", &a[i][j]) != 1){
				flag = 1;
			}		
		}
	}




	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: ADD YOUR CODE FOR OUTPUT HERE:
	int result = 0;
	
	if(flag == 1){
		printf("Invalid");
	}
	
	else{
		for(int i = 0; i < ROWS; i++){
			for(int j = 0; j < COLS; j++){
				result += a[i][j];
			}
		}
		printf("%d", result);
	}

	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}
