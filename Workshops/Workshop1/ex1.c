#include<stdio.h>
#include<math.h>

int main(){
	int n, p, t;
	
	scanf("%d", &n);
	
	if(n<=100)
		p = 950*n;
		
	else if (n>100 && n<=150)
		p = 100*950 + (n-100)*1250;
		
	else if(n>150 && n<=200)
		p = 100*950 + 50*1250 + (n-150)*1350;
		
	else
		p = 100*950 + 50*1250 + 50*1350 + (n-200)*1550;
		
	
	printf("%d dong", p);
}