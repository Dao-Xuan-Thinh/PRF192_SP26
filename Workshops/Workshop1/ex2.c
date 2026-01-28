#include<stdio.h>
#include<math.h>

//7 5 6

int main(){
	float a, b, c;
	printf("Nhap a b c:");
	scanf("%f %f %f", &a, &b, &c);
	float max = a;
	
	if(max<b)
		max = b;
		
	if (max<c)
		max = c;
		

	printf("\nSo lon nhat la: %.2f", max);
}