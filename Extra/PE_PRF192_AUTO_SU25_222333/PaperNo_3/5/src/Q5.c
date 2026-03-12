#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  printf("\nINPUT:\n");
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
  
  if(flag == 1){
  	printf("Invalid");
  	return 0;
  }
  
  int max = a[0];
  int min = a[0];
  
  for(int i = 0; i < n; i++){
  	if (max < a[i] && a[i] % 2 == 0){
  		max = a[i];
	  }
  	}
  	printf("Maximum even number: %d\n", max);

  for(int i = 0; i <= n; i++){
  	if (max == a[i]){
  		printf("Position: %d\n", i+1);
	  }
  	}
  	
  	
  for(int i = 0; i < n; i++){
  	if (min > a[i] && a[i] % 2 == 0){
  		min = a[i];
	  }
  	}
  	printf("Minimum even number: %d\n", min);

  for(int i = 0; i <= n; i++){
  	if (min == a[i]){
  		printf("Position: %d", i+1);
	  }
  	}
  	  

  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
