#include<stdio.h>

int main(){
	
	char kt = 'a';
	
	printf("|%-10s |%-10s |%-10s |%-10s |%-10s |%-10s\n", "Name", "Value", "Dec", "Hex", "Oct", "Size");
	printf("|%-10s |%-10c |%-10u |%-10x |%-10o |%-10d", "kt", kt, kt, kt, kt, sizeof(kt));
	
	int integerVar = 10;
	long longVar = 1000;
	float floatVar = 13.5f;
	double doubleVar = 100.15;
	
	printf("%-15s\n", "Size (Bytes)");
	printf("----------------------------------\n");
	
	printf("charVar: %-15d\n",sizeof(kt));
	printf("integerVar: %-15d\n",sizeof(integerVar));
	printf("longVar: %-15d\n",sizeof(longVar));
	printf("floatVar: %-15d\n",sizeof(floatVar));
	printf("doubleVar: %-15d\n",sizeof(doubleVar));
}
