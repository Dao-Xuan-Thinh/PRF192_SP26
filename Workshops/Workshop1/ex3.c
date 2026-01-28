#include<stdio.h>
#include<math.h>

//a4 b5 c3

int main(){
	float a, b, c, max;
	
	printf("Nhap a, b, c: ");
	scanf("%f %f %f", &a, &b, &c);
	
	if(a>b && a>c)
		max = a;
		
	else if(b>a && b>c)
		max = b;
		
	else
		max = c;
		
	printf("\nSo lon nhat la: %.2f", max);
	
}
