#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("clear");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  printf("\nINPUT:\n");
  int n;
  long long temp = 1;
  float s = 0;

  scanf("%d", &n);

  for (int start = 1; start <= n; start++){
    temp *= start;
    s = s + 1.0/temp;
  }


  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  if(n == 0){
    printf("Error: n must be greater than 0.");
  }

  else{
    printf("%.3f", s);
  }
    

  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}