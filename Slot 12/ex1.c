//Calls
#include<stdio.h>


//Functions
int Sum(int n){
    int total = 0;
    for(int i = 1; i <= n/2; i++){
        if(n%i == 0){
            total += i;
        }
    }
    return total;
}

int InputCheck(){
    int check;
    printf("Nhap n >");
    while(scanf("%d", &check) != 1 || check <= 0){
        printf("n khong hop le");
        fflush(stdin);
    }
    return check;
}


//Codes 
int main(){
    int n;
    n = InputCheck();
    int result = Sum(n);
    printf("%d", result);

    return 0;
}