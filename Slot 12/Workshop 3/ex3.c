//Call
#include<stdio.h>

//Funcs
float SalaryCal(float hour){
    float salary = 0;
    float pay = 22.700;

    if(hour < 40){
        salary = 22.7 * hour;
    }

    else{
        salary = (40 * pay) + ((hour - 40) * (pay * 1.5));
    }
    return salary;
}

float InputCheck(){
    float check;
    while(scanf("%f", &check) != 1){
        printf("\nso khong hop le");
        fflush(stdin);
    }
    return check;
}

//Codes
int main(){
    float hour, salary;
    printf("Nhap so gio lam viec : ");
    hour = InputCheck();
    salary = SalaryCal(hour);
    printf("\nLuong cua ban sau %.1f tieng la : %.2fk", hour, salary);
}