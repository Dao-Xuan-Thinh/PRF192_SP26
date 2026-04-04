#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int guess, target;

    srand(time(NULL));
    target = (rand() % 100) + 1;
    printf("%d\n", target);

    printf("Hay doan mot so tu 1 den 100\n");
    scanf("%d", &guess);

    while(guess != target){
        if(guess < target){
            printf("Lon hon! Hay doan lai: ");
        }
        else{
            printf("Nho hon! Hay doan lai: ");
        }
        scanf("%d", &guess);
    }

    printf("Chuc mung! Ban da doan dung so %d\n", target);
    return 0;
}
//add s.time 
