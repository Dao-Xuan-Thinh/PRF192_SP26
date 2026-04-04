#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
    system("cls");
    printf("\nINPUT:\n");
    char a[101];
    char seek, replace; 

    fgets(a, 101, stdin);
    scanf("%c", &seek);
    fflush(stdin);
    scanf("%c", &replace);

    int len = 0;
    while (a[len] != '\0' && a[len] != '\n') {
        len++;
    }


    printf("\nOUTPUT:\n"); 

    int count = 0;
    for(int i = 0; i < len; i++){
        if(a[i] == seek){
            a[i] = replace;
            count++;
        }
    }

    printf("%d\n", count);
    printf("%s", a);
    

    
    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system ("pause");
    return(0);
}