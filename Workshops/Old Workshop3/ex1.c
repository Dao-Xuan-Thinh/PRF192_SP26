#include<stdio.h>

int main(){
	int i, sum = 0;
	for(i = 1; i <= 5; i++){
		if(i % 2 == 1){
			printf("The odd number is: %d\n", i);
			sum += 1;
		}
	}
	printf("Sum the odd numbers is: %d", sum);
}