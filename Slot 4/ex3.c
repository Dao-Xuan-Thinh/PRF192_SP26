#include <stdio.h>

int main(){
	float x;
	printf("nhap so thuc: ");
	scanf("%f", &x);
	
	printf("\ngia tri da nhap la: %.4f\n", x);
	
	int phan_nguyen = (int)x;
	printf("phan nguyen la: %d\n", phan_nguyen);
	
	float phan_thuc = x - (int)x;
	printf("phan thuc la: %.4f\n", phan_thuc);
}
