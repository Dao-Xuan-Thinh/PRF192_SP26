#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int a, flag = 0;
  if(scanf("%d", &a) != 1 ){
    flag = 1;
  }
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  int result = 0;
  int ab = abs(a);

  if(flag == 1){
    printf("-1");
  }
  
  else{
    while(ab != 0){
      result += ab % 10;
      ab /= 10;
    }
  }

  printf("%d",result);
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
