#include<stdio.h>
int a, b, c;

int swap2(int *a, int *b){
    int temp = *a;
	*a = *b;
	*b = temp;
}

int swap3(int *a, int *b, int *c){
    int temp = *a;
    //3 5 7 | temp = 3
    *a = *c;
    //7 5 7 | temp = 3
    *c = temp;
    //7 5 3 | temp = 3
    
    temp = *b;
    //7 5 3 | temp = 5
    *b = *a;
    //7 7 3 | temp = 5
    *a = temp;
    //5 7 3 | temp = 5

    temp = *c;
    //5 7 3 | temp = 3
    *c = *b;
    //5 7 7 | temp = 3
    *b = temp;
    //5 3 7 | temp = 3
    
}

int main(){
    scanf("%d%d%d", &a, &b, &c);
    swap2(&a, &b);
    printf("Swap 2 | %d %d\n", a, b);
    swap2(&a, &b);
    swap3(&a, &b, &c);
    printf("Swap 3 | %d %d %d\n", a, b, c);
}


// int main(){
//     int a[3];
    
//     for(int i = 0; i < 3; i++){
//         scnaf("%d", a[i]);
//     }

//     int temp = a;

//     //swap
//     *temp + 2 = *temp;
//     *temp + 2 =  
// }

// 3 5 7
// 7 5 3
// 5 7 3
// -> 5 3 7