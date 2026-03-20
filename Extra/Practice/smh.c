#include<stdio.h>

int a = 5, b = 3;

int* sole(int a, int n, int* spt){
    int* b; //pointer
    int j = 0;
    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 1){  //a[i] & 1 works too since & compare the end bit of the value a[i] with 1
            b[j] = a[i];
            j++;
        }
    }
    *spt = j;
    return b;
}

void print_mang(int a[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", *(a+i));
        printf("/n");
    }
}

int main(){
    int spt = 0, n = 10, a[] = {1,2,3,4,5,6,7,8,9,10};
    printf("a = %d, a[0] = %d", *a, &a[0]);
    int* b; //b: 1 con tro tro toi vi tri dau tien trong mang 
    print_mang(a, n);
    b = sole(a, n, &spt); 
    print_mang(b, spt);
}