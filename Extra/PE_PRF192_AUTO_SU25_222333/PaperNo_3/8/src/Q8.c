#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

struct Product{
	int id;
	char name[50];
	float price;
};

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n;
	scanf("%d", &n);
	
	int a[n];
	struct Product p[n];
	for(int i = 0; i < n; i++){
		printf("\nEnter details for product %d: \n", i + 1);
		printf("Product name: ");
		scanf("%s", p[i].name);
		printf("Product ID: ");
		scanf("%d", &p[i].id);
		printf("Price: ");
		scanf("%f", &p[i].price);
	}
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  	int index = 0;
  	for(int i = 1; i < n; i++){
  		if(p[i].price > p[index].price){
  			index = i;
		  }
	  }
	
	printf("Name: %s\n", p[index].name);
	printf("ID: %d\n", p[index].id);
	printf("Price: %.2f", p[index].price);

  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
