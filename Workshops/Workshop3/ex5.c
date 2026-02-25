#include<stdio.h>

int main(){
    int n, sum = 0;

    printf("Nhap cac so can tinh tong | Nhap 0 de ket thuc\n");
   
    do {
        sum = sum + n;
    } while(scanf("%d", &n) != 1 || n != 0);

    printf("Tong cua cac so la: %d", sum);
    return 0;
}