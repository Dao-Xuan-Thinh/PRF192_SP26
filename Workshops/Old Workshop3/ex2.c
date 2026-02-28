#include<stdio.h>

int main(){
    int n, sum = 0;

    printf("Nhap cac so can tinh tong | Nhap 0 de ket thuc\n");
    while(scanf("%d", &n) == 1 && n > 0){
        sum = sum + n;
    	printf("\nTong hien tai: %d || So hien tai: %d\n", sum, n);
    }
    printf("Tong cua cac so la: %d", sum);
    return 0;
}