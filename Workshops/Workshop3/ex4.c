#include<stdio.h>

int main(){
    int n, dao = 0;
    
    do {
        printf("Nhap n: "); 
        scanf("%d", &n);
        if(n < 0)
            printf("\nSo khong hop le vui long nhap lai: ");
        fflush(stdin);
    } while(n < 0);
    
    while(n != 0){
        dao = dao * 10 + n % 10;
        n = n / 10;
    }
    printf("\nSo dao nguoc la: %d\n", dao);
    return 0;
}