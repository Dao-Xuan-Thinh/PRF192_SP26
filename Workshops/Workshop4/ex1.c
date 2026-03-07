#include<stdio.h>

int main(){
    float a, b;
    if(scanf("%f %f", &a, &b) != 2){
        printf("Error: Please enter two floating-point numbers.\n");
        return 1;
    }
    
    return 0;
}