#include<stdio.h>
#include<stdlib.h>

typedef struct{
    int ID;
    char Name[30];
    float Score;
}Point;

int main(){
    Point sv;

    printf("ID - ");
    scanf("%d", &sv.ID);
    fflush(stdin);

    printf("Name - ");
    fgets(sv.Name, sizeof(sv.Name), stdin);
    for (int i = 0; i < sizeof(sv.Name); i++){
        if (sv.Name[i] == '\n'){
            sv.Name[i] = '\0';
            break;
        }
    }

    printf("Score - ");
    scanf("%f", &sv.Score);

    FILE *fp;
    //write file
    fp = fopen("baitap3.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 0;
    }

    fprintf(fp, "ID - %d \nName - %s \nScore - %.2f", sv.ID, sv.Name, sv.Score);
    fclose(fp);

    printf("\nOUTPUT\n");

    //read file
    fp = fopen("baitap3.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 0;
    }
    char s;
    do{
        s = getc(fp);
        printf("%c", s);
    }while(s != EOF);

    fclose(fp);

    return 0;
}
