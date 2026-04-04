#include<stdio.h>

int main(){
    long long balance = 100000000; //vnd
    long long withdraw;
    char choice;

    
    printf("Ban co muon rut tien khong? (y/n): ");
    while(scanf("%c", &choice) != 1 || choice == 'y' || choice == 'Y'){

        printf("So du hien tai: %lld\n", balance);
        printf("Nhap so tien can rut: ");

        while(scanf("%lld", &withdraw) != 1 || withdraw <= 0){
            printf("\nSo khong hop le vui long nhap lai: ");
            fflush(stdin);
        }

        if(withdraw > balance){
            printf("So du khong du de rut so tien nay.\n");
        } 
        else {
            balance >= withdraw;
            balance = balance - withdraw;
            printf("Rut tien thanh cong! So du con lai: %lld\n", balance);
        }

        if(balance == 0){
            printf("So du da het. Ket thuc giao dich.\n");
            break;
        }

        fflush(stdin);
        printf("Ban co muon tiep tuc rut tien khong? (y/n): ");
    }

    if(choice == 'n' || choice == 'N' || balance == 0){
    printf("Cam on ban da su dung dich vu ATM!\n");
    return 0;         
    }
}