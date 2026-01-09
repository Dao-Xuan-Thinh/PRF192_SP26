#include<stdio.h>

void main(){
	task_1();
	task_2();
	task_3();
}

int task_1(){
	int b;
	
	int a = 10;
	b = 15;
	printf("%d\n%d\n", a, b);
}



int task_2(){
	const int a = 5;
	printf("a=%02d\n", a);
	
	//const = lock in
	//%002d if a = 5 -> printf("%002d", a) -> 005
}



int task_3(){
	float a = 5;
	// if printf("%f", a) -> 5.000000
	
	printf("%6.2f\n", a); //-> 5.00
}
