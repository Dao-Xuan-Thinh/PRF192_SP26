#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

// Define matrix dimensions
#define ROWS 2
#define COLS 3

/**
 * TODO: Implement the function to calculate the sum of each row.
 * @param matrix: Input 2D integer array.
 * @param result: Output 1D int array to store the sum of each row.
 */
void findRowSum(int a[ROWS][COLS], int result[ROWS]) {
    for(int i = 0; i < ROWS; i++){
        result[i] = 0;
        for(int j = 0; j < COLS; j++){
            result[i] += a[i][j];
        }
    }
}

/**
 * TODO: Implement the function to display the result array.
 */
void displayResults(int result[ROWS]) {
    for (int i = 0; i < ROWS; i++) {
        if (i > 0) printf("\n");
        printf("%d", result[i]);
    }
}

int main() {
    system("cls");
    printf("INPUT:\n");	
    //INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
    int flag = 0;
    int a[ROWS][COLS];
    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLS; j++){
            if(scanf("%d", &a[i][j]) != 1){
                flag = 1;
            }
        }
    }

    // Test
    // for(int i = 0; i < ROWS; i++){
    //     for(int j = 0; j < COLS; j++){
    //         printf("%d ", a[i][j]);
    //         }
    //     printf("\n");
    //     }


   
    printf("OUTPUT:\n");
    // OUTPUT: Hiển thị kết quả ra màn hình
    if(flag == 1){
        printf("Invalid input");
        return 0;
    }

    int result[ROWS];
    findRowSum(a, result);
    displayResults(result);

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return 0;
}
