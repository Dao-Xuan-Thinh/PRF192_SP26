#include<stdio.h>
#include<math.h>

int main(){
	float n;
	int count;

	for(count = 1; count < 6; count++){
		printf("\nNhap vao n (lan %d): ", count);
		
		while(scanf("%f", &n) != 1 || n <= 0 || n >= 1000){
			printf("\nSo khong hop le, nhap lai: ");
			fflush(stdin);
		}
		
		printf("\nCan bac 2 la: %.2f", sqrt(n));
	}
	printf("\nDa xong");
	return 0;
}