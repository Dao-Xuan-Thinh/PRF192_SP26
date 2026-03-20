#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
	system("cls");
	printf("\nINPUT:\n");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	float a, b;
	int flag = 0;
	if(scanf("%f %f", &a, &b) != 2){
		flag = 1;
	}


	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: ADD YOUR CODE FOR OUTPUT HERE:
	if(flag == 1){
		printf("Invalid");
	}
	
	else{
		float area, peri;
		
		area = a * b;
		peri = 2 * (a + b);
		
		printf("%.2f\n%.2f", area, peri);
	}


	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}
