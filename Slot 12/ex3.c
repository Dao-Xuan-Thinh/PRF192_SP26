//Calls
#include<stdio.h>

//Funcs
void ASCIITable() {
	printf("Ma ASCII | Ky tu\n");
	for (int i = 65; i <= 90; i++) {
		printf("%8d | %c\n", i, (char)i);
	}
}

//Codes
int main(){
    ASCIITable();
    return 0;
}