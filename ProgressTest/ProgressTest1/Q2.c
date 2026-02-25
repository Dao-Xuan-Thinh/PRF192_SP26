#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("clear");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  printf("\nINPUT:\n");
  int x, y, odd, total = 0;
  scanf("%d", &x);
  fflush(stdin);
  scanf("%d", &y);

  for(odd = x; odd <= y; odd++){
    if(odd % 2 != 0){
        total = total + odd;
    }
  }

  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
    printf("%d", total);  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
