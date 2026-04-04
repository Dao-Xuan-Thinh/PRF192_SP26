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

    int digits = 0;
    int letters = 0;
    int others = 0;
    // for(int i = 0; i < len; i++){
    //         if(a[i] == 'a' || a[i] == 'b' || a[i] == 'c' || a[i] == 'd' || a[i] == 'e' || a[i] == 'f' || a[i] == 'g' || a[i] == 'h' || a[i] == 'i' || a[i] == 'j' || a[i] == 'k' || a[i] == 'l' || a[i] == 'm' || a[i] == 'n' || a[i] == 'o' || a[i] == 'p' || a[i] == 'q' || a[i] == 'r' || a[i] == 's' || a[i] == 't' || a[i] == 'u' || a[i] == 'v' || a[i] == 'w' || a[i] == 'x' || a[i] == 'y' || a[i] == 'z' || a[i] == 'A' || a[i] == 'B' || a[i] == 'C' || a[i] == 'D' || a[i] == 'E' || a[i] == 'F' || a[i] == 'G' || a[i] == 'H' || a[i] == 'I' || a[i] == 'J' || a[i] == 'K' || a[i] == 'L' || a[i] == 'M' || a[i] == 'N' || a[i] == 'O' || a[i] == 'P' || a[i] == 'Q' || a[i] == 'R' || a[i] == 'S' || a[i] == 'T' || a[i] == 'U' || a[i] == 'V' || a[i] == 'W' || a[i] == 'X' || a[i] == 'Y' || a[i] == 'Z'){
    //             letters++;
    //         }

    //         else if(a[i] == '0' || a[i] == '1' || a[i] == '2' || a[i] == '3' || a[i] == '4' || a[i] == '5' || a[i] == '6' || a[i] == '7' || a[i] == '8' || a[i] == '9'){
    //             digits++;
    //         }

    //         else{
    //             others++;
    //     }
    // }

    for (int i = 0; i < len; i++) {
        if (isalpha(a[i]))
            letters++;
        else if (isdigit(a[i]))
            digits++;
        else    
            others++;
    }

    printf("%d\n", digits);
    printf("%d\n", letters);
    printf("%d\n", others);
    

    
    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system ("pause");
    return(0);
}