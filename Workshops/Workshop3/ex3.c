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
	
	for(bn = 1; bn <= 10; bn++){
		printf("\n%d*%d = %d",n, bn, n*bn);
	}
	
	return 0;
}
