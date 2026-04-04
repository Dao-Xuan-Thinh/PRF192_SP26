#include<stdio.h>

int main(){
    int n, i = 0, sqr = 0;
    
    printf("Nhap n: ");
    while(scanf("%d", &n) != 1 || n < 0){
        printf("\nSo khong hop le vui long nhap lai: ");
        fflush(stdin);
    }
    
    while(sqr < n){
        i++;
        sqr = i * i;
    }
    
    if(sqr == n){
        printf("\n%d la so chinh phuong cua %d", n, i);
    } 
    else{
        printf("\n%d khong phai la so chinh phuong", n);
    }
    return 0;
}