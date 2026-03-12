#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  printf("\nINPUT:\n");
	float a, b;
	scanf("%f%f", &a, &b);
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  float x1, x2;
  if(a < 0){
  	printf("Error: Division by zero");
  }
  
  else{
  	x1 = sqrt(b/a);
  	x2 = -sqrt(b/a);
  }
  
  printf("%.3f	%.3f", x1, x2);
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
