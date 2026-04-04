#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define MAX 101

typedef struct{
    int id;
    char name[MAX];
    long long price;
} Book;

int findID(Book *a, int n, int idTarget){
    for (int i = 0; i < n; i++){
        if (a[i].id == idTarget)
            return i;
    }
    return -1;
}

int maxPrice(Book *a, int n){
    int maxIndex = 0;
    for (int i = 1; i < n; i++){
        if (a[maxIndex].price < a[i].price)
            maxIndex = i;
    }
    return maxIndex;
}

int main(){
    system("cls");
    printf("INPUT:\n");

    int n, count = 1, flag = 0;
    if (scanf("%d", &n) != 1 || n <= 0){
        flag = 1;
    }

    Book a[n];

    for (int i = 0; i < n; i++){
        printf("\n#%d ID: ", count);
        if (scanf("%d", &a[i].id) != 1){
            flag = 1;
        }

        getchar();

        printf("\n#%d Name: ", count);
        if (fgets(a[i].name, sizeof(a[i].name), stdin) == NULL){
            flag = 1;
        }
        a[i].name[strcspn(a[i].name, "\n")] = '\0';

        printf("\n#%d Price: ", count);
        if (scanf("%lld", &a[i].price) != 1){
            flag = 1;
        }

        count++;
    }

    int idTarget;
    printf("\nFind book with ID: ");
    if(scanf("%d", &idTarget) != 1){
        flag = 1;
    }

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");

    if(flag == 1){
        printf("Invalid Input");
    }

    printf("\nBook with id: %d\n", idTarget);
    int target = findID(a, n, idTarget);

    if (target == -1){
        printf("Not Found");
    } else {
        printf("ID - %d\nName - %s\nPrice - %lldk\n", a[target].id, a[target].name, a[target].price);
    }

    printf("\n--------------------------------------\n");

    printf("Book with the highest price: \n");
    int pricein = maxPrice(a, n);
    printf("ID - %d\nName - %s\nPrice - %lld\n", a[pricein].id, a[pricein].name, a[pricein].price);

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return 0;
}