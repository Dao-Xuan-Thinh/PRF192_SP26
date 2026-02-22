#include<stdio.h>
#include<math.h>

int main(){
	float n;
	int count = 1;

	while(count < 6){
		printf("\nNhap vao n (lan %d): ", count);
		
		while(scanf("%f", &n) != 1 || n <= 0 || n >= 1000){
			printf("\nSo khong hop le, nhap lai: ");
			fflush(stdin);
		}
		
		printf("\nCan bac 2 la: %.2f", sqrt(n));
		count++;
	}
	printf("\nDa xong");
	return 0;
}