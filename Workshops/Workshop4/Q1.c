#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  float a, b;
  int Invalid = 0;
  if(scanf("%f %f", &a, &b) != 2){
      Invalid = 1;
  }
  
  
  // Fixed Do not edit anything here.
  printf("OUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  if(Invalid == 1){
    printf("Invalid Input");
    return 0;
  }
  
  float result;
  result = cbrt(pow(a, 2) + pow(b, 2));
  printf("%.2f", result);
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
