#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
//@STUDENT:ADD YOUR CODE FOR DEFINE POINT STRUCT HERE:

typedef struct{
	int x, y;
} Point;

int main() {
	system("cls");
	printf("\nINPUT:\n");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	Point p1, p2;
	scanf("%d %d", &p1.x, &p1.y);
	scanf("%d %d", &p2.x, &p2.y);
	
	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: ADD YOUR CODE FOR OUTPUT HERE:
	if(p1.x > p2.x){
		printf("%d %d", p1.x, p1.y);
	}
	
	else{
		printf("%d %d", p2.x, p2.y);
	}



	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}
