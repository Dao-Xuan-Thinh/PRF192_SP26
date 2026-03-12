#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
//--FIXED PART - DO NOT EDIT ANY THINGS HERE
  void swap(double *a, double *b){ 
//@STUDENT: ADD YOUR CODE FOR FUNCTION SWAP HERE:
	double temp = *a;
	*a = *b;
	*b = temp;


//--FIXED PART - DO NOT EDIT ANY THINGS HERE
 }
int main() {
  system("cls");
	printf("\nINPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	double a, b;
	scanf("%lf%lf", &a, &b);



  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: ADD YOUR CODE FOR OUTPUT HERE:
	swap(&a, &b);
	printf("%.2f %.2f", a, b);

  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
