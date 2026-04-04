#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
    system("cls");
    printf("\nINPUT:\n");
    char str[1000];
    
    fgets(str, sizeof(str), stdin);
    
    int len = 0;
    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }

    printf("\nOUTPUT:\n");

    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
  

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system ("pause");
    return(0);
}