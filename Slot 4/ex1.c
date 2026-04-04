#include<stdio.h>

int main(){
	int x, y;
	
	int z = scanf("%d %d", &x, &y);
	
	if (z>0){
		printf("hay qua\n");
		printf("a = %d ; b = %d", x, y);
	}
	
	else{
		printf("khong hay");	
		printf("test");
	}
}