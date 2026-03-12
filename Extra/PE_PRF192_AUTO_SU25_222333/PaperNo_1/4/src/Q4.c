#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  // Fixed Do not edit anything here.
  printf("INPUT:\n");
  //@STUDENT:ADD YOUR CODE FOR INPUT HERE:
  
  int n, flag = 0;
  if(scanf("%d", &n) != 1 || n < 0){
  	flag = 1;
  }
  
  int a[n];
  for(int i = 0; i < n; i++){
  	scanf("%d", &a[i]);
  }
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  	if(flag == 1){
  		printf("Invalid");
	  }
  	
  	//Prime
	int count = 0;
	for(int i = 0; i < n; i++){
    	for(int j = 2; j <= n/2; j++){
        	if(a[i] % j != 0){
        	printf("%d ", a[i]);	
			count++;
			}
    	}	
	}
	
	printf("%d", count);
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
