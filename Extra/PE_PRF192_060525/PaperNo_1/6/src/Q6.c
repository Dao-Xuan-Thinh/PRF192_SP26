#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
	system("cls");
	printf("\nINPUT:\n");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int a[10], flag = 0;
	for(int i = 0; i < 10; i++){
		if(scanf("%d", &a[i]) != 1){
			flag = 1;
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
		for(int i = 0; i < 10; i++){
			if(a[i] % 2 == 0){
				result += a[i];
			}
		}
		if(result == 0){
			printf("not found");
		}
		else{
			printf("%d", result);
		}
	}

	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}
