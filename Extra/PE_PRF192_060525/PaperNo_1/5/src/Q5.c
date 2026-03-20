#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

//@STUDENT: ADD YOUR CODE FOR FUNCTION SWAP HERE:

void Swap(float* a, float* b) {
	float temp = *a;
	*a = *b;
	*b = temp;
	printf("%.2f\n%.2f", *a, *b);
}

int main() {
	system("cls");
	printf("\nINPUT:\n");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int flag = 0;
	float a, b;
	if(scanf("%f%f", &a, &b) != 2) {
		flag = 1;
	}



	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: ADD YOUR CODE FOR OUTPUT HERE:
	if(flag == 1){
		printf("Invalid");
	}
	
	else{
		Swap(&a, &b);
	}


	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}
