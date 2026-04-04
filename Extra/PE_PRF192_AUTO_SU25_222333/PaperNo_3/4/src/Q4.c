#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int is_prime(int number){
    if(number <= 1){
        return 0;
    }

    for(int i = 2; i <= sqrt(number); i++){
        if (number % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
  system("cls");
  // Fixed Do not edit anything here.
  printf("INPUT:\n");
  //@STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n, flag = 0; 
  if(scanf("%d", &n) != 1 || n<=0){
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
  int count = 0;
  
  if(flag == 1){
  	printf("Invalid");
  	return 0;
  }
  
  for(int i = 0; i < n; i++){
  	int k = is_prime(a[i]);
  	if(k == 1){
  		count++;
	  }
  }
  

	printf("%d", count);

  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
