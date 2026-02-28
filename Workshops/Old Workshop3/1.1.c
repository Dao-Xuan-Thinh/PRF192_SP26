#include<stdio.h>
#include<math.h>

int main(){
	float n;
	
	do {
		printf("Nhap vao n: ");
		fflush(stdin);
	} while(scanf("%f", &n) != 1 || n <= 0 || n >= 1000);

	printf("Can bac 2 la: %.2f", sqrt(n));
	return 0;
}