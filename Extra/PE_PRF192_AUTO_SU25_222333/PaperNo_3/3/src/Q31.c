#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
float temp = 1;
float s = 0;
int i, n;

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  printf("\nINPUT:\n");
  int flag = 0;
  if(scanf("%d", &n) != 1 || n <= 0){
  	flag = 1;
  }
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:  
  
  if(flag == 1){
  	printf("Invalid");
  	return 0;
  }


   for(i = 1; i <= n; i++){
   	temp = i;
   	s += 1.0 / temp;
   }

	printf("%.3f", s);


  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
