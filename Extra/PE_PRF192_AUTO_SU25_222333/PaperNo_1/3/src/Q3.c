#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
	printf("\nINPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n;
	if(scanf("%d", &n) != 1 || n < 1){
		return 0;
	}


  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: ADD YOUR CODE FOR OUTPUT HERE:
 	int i = 2, count = 0;
	 while(count < n){
 		if(i % 2 == 0){
 			printf("%d ", i);
 			i++;
 			count++;
		 }
		else{
			i++;
		}
	 }



  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
