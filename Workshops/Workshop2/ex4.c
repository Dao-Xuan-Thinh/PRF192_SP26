#include<stdio.h>

int main(){
    int n, dao = 0;
    
    printf("Nhap n: ");
    while(scanf("%d", &n) != 1 || n < 0){
        printf("\nSo khong hop le vui long nhap lai: ");
        fflush(stdin);
    }
    
    while(n != 0){
        dao = dao * 10 + n % 10;
        n = n / 10;
    }
    printf("\nSo dao nguoc la: %d", dao);
    return 0;
}