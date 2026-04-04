#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
	system("cls");
	printf("\nINPUT:\n");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int flag = 0;
	float a, b, c;
	
	if(scanf("%f %f %f", &a, &b, &c) != 3){
		flag = 1;
	}



	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: ADD YOUR CODE FOR OUTPUT HERE:
	if(flag == 1){
		printf("Invalid");
	}
	
	else{
		float min = a;
		
		if(min > b){
			min = b;
		}
		
		if(min > c){
			min = c;
		}
		
		printf("%.2f", min);
	}



	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}
