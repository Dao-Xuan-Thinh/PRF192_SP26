#include<stdio.h>

int main(){
	int a = 7, b = 2;
	double kq;
	
	printf("a = %d\nb = %d\n", a, b);
	
	kq = a+b;
	printf("%d + %d = %.0f\n", a, b, kq);
	
	kq = a-b;
	printf("%d - %d = %d\n", a, b, a-b);
	
	kq = a*b;
	printf("%d * %d = %d\n", a, b, a*b);
	
	kq = a/b;
	printf("%d / %d = %.2f\n", a, b, (float)a/b);
}


//tblqae :c