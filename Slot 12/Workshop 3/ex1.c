//Calls
#include<stdio.h>
#include <stdbool.h>
int GetDays(int month, int leap);
int InputCheck_M();
int InputCheck_Y();
int LeapCheck(int year);

int check;


//Functions
int LeapCheck(int year){
    if(year % 4 == 0){
        check = true;
    }

    else{
        check = false;
    }

    return check;
}

int GetDays(int month, int leap){
    int day;
    switch(month){
        case 2:
        if(leap == 1){
            day = 29;
        }

        else if(leap == 0){
            day = 28;
        }
        break;

        case 4:
        case 6:
        case 9:
        case 11:
            day = 30;
            break;

        default:
            day = 31;
            break;
    }
    return day;
}

int InputCheck_M(){
    while(scanf("%d", &check) != 1 || check <= 0 || check > 12){
        printf("\nso khong hop le\n");
        fflush(stdin);
    }
    return check;
}

int InputCheck_Y(){
    while(scanf("%d", &check) != 1 || check <= 0){
        printf("\nso khong hop le\n");
        fflush(stdin);
    }
    return check;
}


//Codes
int main(){
    int day, month, year, leap;
    printf("nhap thang : ");
    month = InputCheck_M();

    if(month == 2){
        printf("nhap nam : ");
        year = InputCheck_Y();
        leap = LeapCheck(year);
    }

    day = GetDays(month, leap);
    printf("Thang %d co %d ngay !", month, day);
    return 0;
}
