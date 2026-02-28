//Call
#include<stdio.h>
#include<math.h>
int a, b, prime, number, check;

//Funcs
int PrimeCheck(int number){
    if(number <= 1){
        return 0;
    }

    for(int i = 2; i <= sqrt(number); i++){
        if (number % i == 0) {
            return 0;
        }
    }
    return 1;
}

int InputCheck(){
    while(scanf("%d", &check) != 1 || check < 0){
        printf("\nSo khong hop le :3");
        fflush(stdin);
    }
    return check;
}

//Codes
int main(){
    printf("Hay nhap a:");
    a = InputCheck();
    printf("Hay nhap b:");
    b = InputCheck();

    for(number = a; number <= b; number++){
        if(number%2 == 0 && number != 2){
            continue;
        }

        int temp = PrimeCheck(number);
        if(temp == 1){
            printf("%d", number);
        }
    }
}