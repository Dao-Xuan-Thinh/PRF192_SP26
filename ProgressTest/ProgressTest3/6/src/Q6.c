#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void swapMinMax(int a[], int n){
  int max = 0;
  for (int i = 0; i < n; i++){
    if(a[max] < a[i]){
      max = i;
    }
  }

  int min = 0;
  for (int i = 0; i < n; i++){
    if(a[min] > a[i]){
      min = i;
    }
  }

  int temp = a[min];
  a[min] = a[max];
  a[max] = temp;

  for (int i = 0; i < n; i++){
    printf("%d ", a[i]);
  }
}

int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
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
    swapMinMax(a, n);
  }
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
