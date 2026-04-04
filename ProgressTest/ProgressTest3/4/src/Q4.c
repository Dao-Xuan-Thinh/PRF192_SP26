#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
// Function to find the largest even number in an array
int findLargestEvenNumber(int a[], int n){
	//@STUDENT: WRITE YOUR CODE HERE:
	int max = 0;
  for(int i = 0; i < n; i++){
    if(a[i] % 2 == 0){
      max = a[i];
      break;
    }
  }

  for (int i = 0; i < n; i++){
    if(max < a[i] && a[i] % 2 == 0){
      max = a[i];
    }
  }
  if(max % 2 != 0){
    return -1;
  }
  else
    return max;
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
    }
  }

  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  int found;
  if(flag == 1){
    printf("-1");
  }

  else{
    found = findLargestEvenNumber(a, n);
     if (found == -1){
      printf("There are no even numbers in %d elements", n);
     }
     else{
      printf("%d", found);
     }
  }
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
