#include<stdio.h>

int main(){
	int n, bn = 1;
	
	printf("Nhap n : ");
	while(scanf("%d", &n) != 1 || n < 1 || n > 10){
		printf("\nSo khong hop le vui long nhap lai: ");
		fflush(stdin);
	}
	
	while(bn <= n){
		printf("%d ", bn);
		bn++;
	}
	
	bn = 1;
	
	while(bn <= 10){
		printf("\n%d*%d = %d",n, bn, n*bn);
		bn++;
	}
	
	return 0;
}


//test:
//goto test;