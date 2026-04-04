#include<stdio.h>

void Convert(int n){
	if(n>0){
		Convert(n / 2);
		printf("%d", n%2);
	}
}

int main(){
    int n;
    if(scanf("%d", &n) != 1 || n < 0){
        printf("Nhap sai gia tri\n");
    }

    else if(n == 0){
        printf("0");
    }

    Convert(n);
}