#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("clear");
  printf("\nINPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  float a, b, result;
  
  scanf("%f", &a);
  if(a==0){
    printf("Error: Division by zero");
    return 0;
  }
  fflush(stdin);
  scanf("%f", &b);
  
  result = cbrt(-b/a);
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  printf("%0.3f", result);
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
