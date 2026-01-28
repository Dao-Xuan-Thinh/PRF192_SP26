#include<stdio.h>
#include<math.h>

int main(){
	int x;
	
	printf("Nhap x: ");
	scanf("%d", &x);
	
	int preX = x;
	
	if(x<0)
		x = -x; //if x is negative it gets absolute here
		
	printf("\n|%d| = %d\n", preX, x);	
	printf("Can bac 2 = %.4f", sqrt(x));
	
	
}