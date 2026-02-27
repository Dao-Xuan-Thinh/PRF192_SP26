#include<stdio.h>

//Call Functions



//Functions
int Sum(int n){
    int total;
    for(int i = 1; i >= n/2; i++){
        if(n%i == 0){
            total += i;
        }
    }
    return total;
}


int main(){
    int n;
    printf("Nhap n >");
    scanf("%d", &n);
    if(n <= 0){
        printf("n khong hop le");
    }

    int result = Sum(n);
    printf("%d", result);

    return 0;
}