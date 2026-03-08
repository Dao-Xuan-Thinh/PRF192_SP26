#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n, flag_invalid = 0;
  if(scanf("%d", &n) != 1 || n <= 0){
    flag_invalid = 1;
  }

  int a[n];
  for(int i = 0; i < n; i++){
    if(scanf("%d", &a[i]) != 1){
      flag_invalid = 1;
    }
  }

  // Fixed Do not edit anything here.
  printf("OUTPUT:\n");
  if(flag_invalid == 1){
    printf("Invalid input.");
    return 0;
  }
  
  int found = 0;
  for(int i = 0; i < n; i++){
    
    //check even number
    if(a[i] % 2 != 0)
      continue;

    //Check to prevent dups
    int alr_printed = 0;
    for(int j = 0; j < i; j++){
      if(a[j] == a[i]){
        alr_printed = 1;
        break;
      }
    }

    if(alr_printed == 1)
      continue;

    int freq = 0;
    for(int k = 0; k < n; k++){
      if(a[k] == a[i]){
        freq++;
      }
    }

    if(found > 0){
      printf("\n");
    }
    printf("%d-%d", freq, a[i]);
    found++;
  }
  
  if(found == 0){
    printf("Not found\n");
  }
  
  printf("\n");
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE  
  system ("pause");
  return(0);
}
