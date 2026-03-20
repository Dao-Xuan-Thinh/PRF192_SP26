#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
//@STUDENT: ADD YOUR CODE FOR FUNCTION HERE:

int gdigit(int n){
	int max = 0;
	while (n > 0){
		int digit = n % 10;
		if (digit > max){
			max = digit;
		}
		n = n / 10;
	}
	return max;
}

int main() {
	system("cls");
	printf("\nINPUT:\n");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n, flag = 0;
	if(scanf("%d", &n) != 1){
		flag = 1;
	}


	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: ADD YOUR CODE FOR OUTPUT HERE:
	if (flag == 1){
		printf("Invalid");
	}
	
	else{
		int result;
		result = gdigit(n);
		printf("%d", result);
	}


	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}
