#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int filterString(char str[]) {
	int i, j = 0;
	for (i = 0; str[i] != '\0'; i++) {
		char c = tolower(str[i]);

		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
			j++;
		}
	}
	str[j] = '\0';
	return j;
}

int main() {
	system("cls");
	//@STUDENT:ADD YOUR CODE FOR INPUT HERE:
	printf("\nINPUT:\n");
	char input[101];
	if (fgets(input, sizeof(input), stdin)) {
		input[strcspn(input, "\n")] = 0;
	}





	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:

	int count;
	char copy[101];
	strcpy(copy, input);
	count = filterString(copy);
	printf("Vowels: %d\n", count);

	int len = strlen(input);
	printf("Reversed string: ");
	for(int i = len - 1; i >= 0; i--){
		if(input[i] == ' '){
			
		}
		
		else
			printf("%c", input[i]);
	}


	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}
