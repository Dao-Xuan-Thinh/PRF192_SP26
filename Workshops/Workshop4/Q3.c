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
    n = 0;
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
    printf("Invalid input");
    return 0;
  }

  int even[n], count = 0;
  for (int i = 0; i < n; i++) {
      if (a[i] % 2 == 0) {
        even[count++] = a[i];
      }
  }

  for (int i = 0; i < count - 1; i++) {
    for (int j = 0; j < count - i - 1; j++) {
      if (even[j] < even[j + 1]) {
        int temp  = even[j];
        even[j]   = even[j + 1];
        even[j+1] = temp;
        }
    }
  }

  for (int i = 0; i < count; i++) {
    if (i < count - 1)
      printf("%d\n", even[i]);
    else
      printf("%d\n", even[i]);
  }
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE  
  system ("pause");
  return(0);
}
