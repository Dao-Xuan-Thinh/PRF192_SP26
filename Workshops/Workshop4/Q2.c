#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define MAX 2

int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  float /*a[MAX], b[MAX],*/x1, x2, y1, y2, result;
  int flag_invalid = 0;

if (
    scanf("%f %f", &x1, &y1) != 2
    ||
    scanf("%f %f", &x2, &y2) != 2
) {
    flag_invalid = 1;
}

  // for(int i = 0; i < MAX; i++){
  //   if(scanf("%f", &a[i]) != 1){
  //     flag_invalid = 1;
  //   };
  // }

  // for(int i = 0; i < MAX; i++){
  //   if(scanf("%f", &b[i]) != 1){
  //     flag_invalid = 1;
  //   };
  // }

  // result = sqrt(pow(a[1] - a[0], 2) + pow(b[1] - b[0], 2));
  result = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

  // Fixed Do not edit anything here.
  printf("OUTPUT:\n");
  if(flag_invalid == 1){
    printf("Invalid input.\n");
    return 0;
  }

  printf("%.4f\n", result);

  if(/*a[0] == b[0] && a[1] == b[1]*/x1 == x2 && y1 == y2){
    printf("Points are coincident\n");
  }  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE  
  system ("pause");
  return(0);
}