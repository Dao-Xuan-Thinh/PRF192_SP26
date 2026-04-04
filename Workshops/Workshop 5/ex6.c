#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
    system("cls");
    printf("\nINPUT:\n");

    int n;
    scanf("%d", &n);

    char names[10][50];
    for (int i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                char temp[50];
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    printf("\nOUTPUT:\n");
    for (int i = 0; i < n; i++)
        printf("%s\n", names[i]);

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return 0;
}