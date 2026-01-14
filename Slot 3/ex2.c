#include<stdio.h>

int main(){
	char kt = 'A';
	
	printf("kt: %c\n", kt);
	printf("Binary: 01000001\n");
	printf("Hex: %x\n", kt);
	printf("Octal: %o\n\n", kt);
	
	char charVar = 'A';
	int integerVar = 10;
	long longVar = 1000;
	float floatVar = 13.5f;
	double doubleVar = 100.15;
	
	printf("%-15s\n", "Size (Bytes)");
	printf("----------------------------------\n");
	
	printf("charVar: %-15d\n",sizeof(charVar));
	printf("integerVar: %-15d\n",sizeof(integerVar));
	printf("longVar: %-15d\n",sizeof(longVar));
	printf("floatVar: %-15d\n",sizeof(floatVar));
	printf("doubleVar: %-15d\n",sizeof(doubleVar));

	
}
