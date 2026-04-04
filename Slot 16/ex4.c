//Nhap mang in ra mang dao nguoc pointer
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void Reverse(char input[]){
    char *start = input;
    char *end = input + strlen(input) - 1;
    char temp;

    while(start < end){
        *start = temp;
        *start = *end;
        *end = temp;
    
        start++;
        end--;
    }
}

int main(){
    char input[100];
    fget(input, sizeof(input), input);
    Reverse(input);
}