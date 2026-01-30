#include<stdio.h>

int main() {
	char phep;
	int a, b;
	float kq;

	scanf("%d,%d", &a, &b);

	fflush(stdin);

	int value_meth = scanf("%c", &phep);

	if(value_meth != 1) {
		printf("Khong hop le");
		return 0;
	}

	switch(phep) {
		case '+':
			kq = a + b;
			break;

		case '-':
			kq = a - b;
			break;

		case '*':
			kq = a * b;
			break;

		case '/':
			if(b == 0) {
				printf("Khong the chia cho 0");
				return 0;
			} else
				kq = (float)a / b;
			break;

		case '%':
			if(b == 0) {
				printf("Khong the chia cho 0");
				return 0;
			} else
				kq = a % b;
			break;


	}
	if(phep == '+' || phep == '-' || phep == '*' || phep == '%')
		printf("%d %c %d = %.0f", a, phep, b, kq);

	else if (phep == '/')
		printf("%d %c %d = %.02f", a, phep, b, kq);
}