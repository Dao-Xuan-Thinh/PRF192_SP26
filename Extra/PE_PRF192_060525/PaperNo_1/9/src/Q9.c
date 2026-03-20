#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define MAX 5
//@STUDENT:ADD YOUR CODE FOR FUNCTION SORT HERE:

void out_descen(int a[], int size) {
	int temp[MAX];
	for(int i = 0; i < size; i++)
		temp[i] = a[i];

	for(int i = 0; i < size - 1; i++)
		for(int j = 0; j < size - i - 1; j++)
			if(temp[j] < temp[j+1]) {
				int swap = temp[j];
				temp[j] = temp[j+1];
				temp[j+1] = swap;
			}

	for(int i = 0; i < size; i++)
		printf("%d", temp[i]);
}

int main() {
	system("cls");
	printf("\nINPUT:\n");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int a[MAX], flag = 0;
	
	for(int i = 0; i < MAX; i++){
		if(scanf("%d", &a[i]) != 1){
			flag = 1;
		}
	}



	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: ADD YOUR CODE FOR OUTPUT HERE:
	if(flag == 1){
		printf("Invalid");
	}
	
	else{
		out_descen(a, MAX);
	}



	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}
