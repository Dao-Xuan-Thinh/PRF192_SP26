#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


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
	int result = 0;
	if(flag == 1){
		printf("Invalid");
	}
	
	else{
		for(int i = 2; i <= n; i++){
			int isPrime = 1;
			for(int j = 2; j <= i/2; j++){
				if(i % j == 0){
					isPrime = 0;
					break;
				}
			}
			if(isPrime == 1){
				result += i;
			}
		}
		printf("%d", result);
	}



	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}
