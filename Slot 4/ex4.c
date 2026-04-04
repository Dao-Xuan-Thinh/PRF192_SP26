#include <stdio.h>

int main(){
	int a, b;
	char pt;
	
	printf("nhap a,b: ");
	scanf("%d,%d", &a, &b);
	
	fflush(stdin); //also this
	
	printf("\nnhap phep toan: ");
	scanf("%c",&pt);
		
		
	if (b == 0){ //THIS == not THIS =
		printf("khong the chia cho 0");
	}
	
	else{
		printf("\nKet qua: %d %c %d = %.1f\n", a, pt, b, (float)a/b);
	}
}