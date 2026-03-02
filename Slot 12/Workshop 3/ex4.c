//Call
#include<stdio.h>
float a, b, fcheck,result;
int input, check;

//Funcs
void show_menu(){
    printf("\n1. Cong | +");
    printf("\n2. Tru  | -");
    printf("\n3. Nhan | *");
    printf("\n4. Chia | /");
    printf("\n0. Thoat Chuong Trinh.\n\n");
    printf("Hay nhap so de chon function\n> ");
}

float processor(float a, float b, int input){
    switch(input){
        case 1:
            result = a + b;
            break;
        case 2:
            result = a - b;
            break;
        case 3:
            result = a * b;
            break;
        case 4:
            result = a / b;
            break;
    }
    return result;
}

int InputCheck(){
    while(scanf("%d", &check) != 1 || check > 4 || check < 0){
        printf("\nSo khong hop le :3");
        fflush(stdin);
    }
    return check;
}

float NumCheck(){
    while(scanf("%f", &fcheck) != 1){
        printf("\nSo khong hop le :3");
        fflush(stdin);
    }   
    return fcheck;
}

//Codes
int main(){
    do{
        show_menu();
        input = InputCheck();
        if(input == 0){
            printf("Cam on ban da dung chuong trinh");
            break;
        }
        printf("\na> ");
        a = NumCheck();
        printf("b> ");
        b = NumCheck();
        result = processor(a, b, input);
        printf("\nKet qua la: %.2f\n", result);
    } while(input != 0);

    return 0;
}
