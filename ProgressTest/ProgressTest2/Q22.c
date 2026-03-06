#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

// Function to check if a number is a prime number
int isPrime(int n) {
    //@STUDENT: WRITE YOUR CODE HERE
    if(n < 2){
        return 0;
    }

    for(int i = 2; i <= sqrt(n); i++){
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int displayPrime(int a[], int size){
    int found = 0;
    for (int i = 0; i < size; i++){
       if (isPrime(a[i]) == 1) {
            printf("%d ", a[i]);
            found++;
        }
   }
   return found;
}


int main() {
  system("cls");
  // Fixed Do not edit anything here.

  printf("INPUT:\n");
  //@STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n;
  int invalid = 0;
  if(scanf("%d", &n) != 1 || n < 0){
    invalid = 1;
  }

  int a[n];

  for(int i = 0; i < n; i++){
    scanf("%d", &a[i]);
  }
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  if(invalid == 1){
    printf("Invalid input");
    return 0;
  }

  int found;
  int size = sizeof(a) / sizeof(a[0]);

  found = displayPrime(a, size);
  if (found == 0){
    printf("Not found");
  }

  

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}