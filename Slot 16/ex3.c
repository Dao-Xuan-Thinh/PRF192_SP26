//Nhap mang in ra mang dao nguoc
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void Reverse(char input[]){
    int len = strlen(input);
    for(int i = 0; i < len/2; i++){
        char temp = input[i];
        input[i] = input[len - 1 - i];
        input[len - 1 - i] = temp;
    }
    printf("%s", input);
}

int main(){
    char input[100];
    fgets(input, sizeof(input), stdin);
    Reverse(input);
}