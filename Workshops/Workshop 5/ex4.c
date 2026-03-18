#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
    system("cls");
    printf("\nINPUT:\n");
    char a[101];

    fgets(a, 101, stdin);

    int len = 0;
    while (a[len] != '\0' && a[len] != '\n') {
        len++;
    }


    printf("\nOUTPUT:\n"); 

    int flag = 0;
    for(int i = len - 1; i >= 0; i--){
        if(a[i] == ' '){
            flag += 1;
        }       
    }
    printf("%d", flag);


    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system ("pause");
    return(0);
}