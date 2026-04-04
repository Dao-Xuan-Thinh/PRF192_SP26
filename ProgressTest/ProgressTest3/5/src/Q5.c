#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int findDifference(int a[], int n) {
//@STUDENT:ADD YOUR CODE
  int max = a[0];
  for (int i = 0; i < n; i++){
    if(max < a[i]){
      max = a[i];
    }
  }

  int min = a[0];
  for (int i = 0; i < n; i++){
    if(min > a[i]){
      min = a[i];
    }
  }

  int result = 0;
  result = max - min;

  return result;

}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  printf("INPUT:\n");
  int n, flag = 0;
  if(scanf("%d", &n) != 1){
    flag = 1;
  }

  int a[n];
  for(int i = 0; i < n; i++){
    if(scanf("%d", &a[i]) != 1){
      flag = 1;
      break;
    }
  }
  

  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  if(flag == 1){
    printf("-1");
  }
  else{
    int dif = findDifference(a, n);
    printf("%d", dif);
  }
  

  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
