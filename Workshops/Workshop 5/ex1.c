#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
    system("cls");
    printf("\nINPUT:\n");
    
    char a[50];
    int count = 0;
    fgets(a, 50, stdin);

    for(int i = 0; a[i] != '\0'; i++){
        count++;
    }



    printf("\nOUTPUT:\n");
    printf("%d", count - 1);  
  

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system ("pause");
    return(0);
}