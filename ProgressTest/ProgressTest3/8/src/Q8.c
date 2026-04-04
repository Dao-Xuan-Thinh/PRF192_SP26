#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  char a[101];
  fgets(a, sizeof(a), stdin);
  int len = strlen(a);
  

  for(int i = 0; i < len; i++){
    if(a[i] == '\n'){
      a[i] = ' ';
    }
  }

  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  int count = 0;
  for(int i = 0; i < len; i++){
      if(a[i] == ' '){
          printf("%c", a[i]);
          count = 0;
      }
      else if(count < 2){
          printf("%c", toupper(a[i]));
          count++;
      }
      else{
          printf("%c", a[i]);
          count++;
      }
  }
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
