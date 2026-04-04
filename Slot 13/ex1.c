//Calls
#include<stdio.h>
#define MAX 20

void Menu();
void InputArray(int a[], int n);
void out_ascen(int a[], int size);
void out_descen(int a[], int size);
int Inputcheck();
int Numcheck();
int SearchArray(int n, int size);
int Remove_First(int a[], int size, int n);
int Remove_All(int a[], int n, int size);

int a[MAX];
int i;

//Functions
void Menu(){
    printf(
        "\n"
        "1 - Add values\n"
        "2 - Search a value\n"
        "3 - Remove the first existence of a value\n"
        "4 - Remove all existences of a value\n"
        "5 - Print out the array\n"
        "6 - Print out the array in ascending order (preserving the positions of elements)\n"
        "7 - Print out the array in descending order (preserving the positions of elements)\n"
        "0 - Quit\n"
    );
    return;
}

//Function 1
void InputArray(int a[], int n){
    for(int i = 0; i < n; i++){
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
    }
}

//Check input for the menu
int Inputcheck(){
    while(scanf("%d", &i) != 1 || i < 0 || i > 7){
        printf("Invalid Input :3");
        while(getchar() != '\n');                                   //Ts important asf gng
    }
    return i;
}

//Check input for the functions
int NumCheck(){
    while(scanf("%d", &i) != 1){
        printf(
            "\nInvalid Num :3\n"
            "> "
        );
        while(getchar() != '\n');
    }
    return i;
}

//Function 2
int SearchArray(int n, int size){
    for (int i = 0; i < size; i++){
        if (a[i] == n){
            return i;
        }
    }
    return -1;
}

//Function 3    //what?
int Remove_First(int a[], int size, int n){
    for (int i = 0; i < size; i++){
        if (a[i] == n){
            for (int j = i; j < size - 1; j++){
                a[j] = a[j + 1];
            }
        printf("The value %d has been removed from the array :3\n", n);
        return size - 1;
        }
    }
    printf("Value not found\n");
    return size;
}

//Function 4
int Remove_All(int a[], int n, int size){
    int n_size = 0;
    for (i = 0; i < size; i++){
        if (a[i] == n){
            a[n_size++] = a[i];
            printf("The values %d have been removed from the array\n", n);
        }
        if (n_size == size){
            printf("Value not found\n");
        }
    }
    return n_size;
}

//Function 5
void outputArray(int a[], int size){
    for(int i = 0; i < size; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }
}

//Function 6
void out_ascen(int a[], int size){
    int temp[MAX];
    for(int i = 0; i < size; i++)
        temp[i] = a[i];
    
    // bubble sort the temp array
    for(int i = 0; i < size - 1; i++)
        for(int j = 0; j < size - i - 1; j++)
            if(temp[j] > temp[j+1]){
                int swap = temp[j];
                temp[j] = temp[j+1];
                temp[j+1] = swap;
            }
    
    printf("Ascending order: ");
    for(int i = 0; i < size; i++)
        printf("%d ", temp[i]);
    printf("\n");
}

//Function 7
void out_descen(int a[], int size){
    int temp[MAX];
    for(int i = 0; i < size; i++)
        temp[i] = a[i];
    
    // bubble sort descending
    for(int i = 0; i < size - 1; i++)
        for(int j = 0; j < size - i - 1; j++)
            if(temp[j] < temp[j+1]){
                int swap = temp[j];
                temp[j] = temp[j+1];
                temp[j+1] = swap;
            }
    
    printf("Descending order: ");
    for(int i = 0; i < size; i++)
        printf("%d ", temp[i]);
    printf("\n");
}

//I WANT TO KILL MYSELF

//Main codes
int main(){
    int input, n, result, size = 0;

    do{
        Menu();
        size = sizeof(a) / sizeof(a[0]);
        printf("> ");
        input = Inputcheck();
        
        switch(input)
        {
        case 1:
            printf(
                "How many value do you want to input into the array\n"
                "> "
            );
            n = NumCheck();
            InputArray(a, n);                                          //Calls don't use a[] i think
            break;
        
        case 2:
            printf(
                "Input Sreach Number\n"
                "> "
            );
            n = NumCheck();
            result = SearchArray(n, size);
            printf("The number %d is found at index %d in the array :3\n", n, result);
            break;

        case 3:
            printf(
                "Input Value you want to remove (First value showed up in array)\n"
                "> "
            );
            n = NumCheck();

            size = Remove_First(a, size, n);
            break;

        case 4:
            printf(
                "Input Value you want to remove (All that value in array)\n"
                "> "
            );
            n = NumCheck();

            size = Remove_All(a, n , size);
            break;

        case 5:
            outputArray(a, size);
            break;

        case 6:
            out_ascen(a, size);
            break;

        case 7:
            out_descen(a, size);
            break;
            
        default:
            printf(":3");
            break;
        }
    }while(input != 0);

    printf("Thank you for using the program");

    return 0;
}