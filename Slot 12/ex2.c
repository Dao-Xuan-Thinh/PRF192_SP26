//Calls
#include<stdio.h>

//Functions
int InputCheck(){
    int check;
    while(scanf("%d", &check) != 1 || check <= 0){
        printf("so khong hop le");
        fflush(stdin);
    }
    return check;
}

int FindMax(int a, int b, int c){
    int max = a;
    if(max < b){
        max = b;
        if(max < c){
            max = c;
        }
    }
    return max;

}

//Codes
int main(){
    int a, b, c;
    printf("nhap a: ");
    a = InputCheck();
    printf("\nnhap b: ");
    b = InputCheck();
    printf("\nnhap c: ");
    c = InputCheck();

    int result = FindMax(a, b, c);
    printf("So lon nhat la: %d", result);
}