#include<stdio.h>

int main(){
    int n, i = 0, sqr = 0;
    
    do {
        printf("Nhap n: ");
        fflush(stdin);

        if(sqr < n){
            i++;
            sqr = i * i;
        }
    
    } while(scanf("%d", &n) != 1 || n < 0);
    
    if(sqr == n){
        printf("\n%d la so chinh phuong cua %d", n, i);
    } 
    else{
        printf("\n%d khong phai la so chinh phuong", n);
    }
    return 0;
}