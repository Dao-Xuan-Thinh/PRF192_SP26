#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n, flag = 0;
  if(scanf("%d", &n) != 1){
    flag = 1;
  }

  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  if(flag == 1){
    printf("Invalid input");
    return 0;
  }

  for(int i = 0; i < n; i++){
    int space = n - 1 - i;
    for (int s = 0; s < space; s++){
      printf(" ");
    }
  

    int stars = 2 * i + 1;
    for (int s = 0; s < stars; s++) {
        printf("*");
    }
  
    if (i < n - 1) printf("\n");
  }
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
