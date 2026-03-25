#include<stdio.h>

int main(){
    printf("INPUT\n");
    FILE *fp;

    fp = fopen("baitap2.txt", "w");
    if(fp == NULL){
        printf("Error!");
        return 0;
    }

    int n;
    printf("Nhap vao n: ");
    scanf("%d", &n);
    fprintf(fp, "%d\n", n);

    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        fprintf(fp, "%d ", a[i]);
    }

    fclose(fp);

    printf("\nOUTPUT\n");
    fp = fopen("baitap2.txt", "r");
    if(fp == NULL){
        printf("Error!");
        return 0;
    }

    printf("Noi dung cua file la:\n");

    char s;
    do{
        s = getc(fp);
        printf("%c  a", s);
    }while(s != EOF);


    fclose(fp);
    return 0;
}