//Calls
#include<stdio.h>
#define MAX 100
int countPrimes(int a[], int n);
int isPrime(int n);

//Functions
void doubleX(int x){
    x = x + x;
}
void doubleX2(int *p){
    *p = *p + *p;
}
void inputA(int a[], int n){
    for(int i = 0; i < n; i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }   
}
void outputArr(int a[], int n){
    for(int i = 0; i < n; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }
}
int isPrime(int n){
    if(n < 2) return 0;
    for(int i = 2; i <= n/2; i++){
        if(n % i == 0) return 0;
    }
    return 1;

}
int countPrimes(int a[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(isPrime(a[i])){
            count++;
        }
    }
    return count;
}

//Codes
int main(){
    int n;
    int a[MAX];
    printf("> ");
    scanf("%d", &n);
    inputA(a, n);
    int primeCount = countPrimes(a, n);
    printf("So luong so nguyen to trong mang la: %d", primeCount);

    /*
    int x = 10;
    doubleX2(&x);
    printf("gia tri cua x = %d", x);
    */
    
    /*
    int *p = &x;
    printf("dia chi duoc chua %u",p);
    printf("\ngia tri cua vung nho ma p chi den: %d", *p);

    //x = x * x;
    *p = (*p) * (*p);

    printf("\ngia tri cua x la: %d", x);
    printf("\ngia tri cua vung nho ma p chi den: %d", *p);
    printf("\ndia chi duoc chua %u",p);

    //p chi den y
    int y = 5;
    p = &y;
    printf("\ndia chi duoc chua %u",p);
    printf("\ngia tri cua vung nho ma p chi den: %d", *p);
    *p = (*p) * (*p);
    printf("\ngia tri cua y la: %d", y);
    */

    return 0;
}