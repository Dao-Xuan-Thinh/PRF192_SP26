//ex1.c but pointer
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>


int VowelCount(char input[]){
    int len = strlen(input);
    int vowels = 0;
    for (int i = 0; i < len; i++){
        char c = tolower(*(input + i));
        if (c == 'o' || c == 'e' || c == 'a' || c == 'i' || c == 'u'){
            vowels++;
        }
    }
    return vowels;
}

int main(){
    char input[100];
    fgets(input, sizeof(input), stdin);
    int result = VowelCount(input);
    printf("%d", result);
}