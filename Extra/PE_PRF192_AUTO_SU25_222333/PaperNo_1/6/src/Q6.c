#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define MAX 10

int main() {
  system("cls");
	printf("\nINPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int a[MAX];
	for(int i = 0; i < MAX; i++){
		scanf("%d", &a[i]);
	}

   
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: ADD YOUR CODE FOR OUTPUT HERE:
  	
  	int biggest = a[0];
  	for(int i = 0; i < MAX; i++){
  		if(biggest < a[i]){
  			biggest = a[i];
		  }
	  }

	printf("%d", biggest);
    
  
 
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
