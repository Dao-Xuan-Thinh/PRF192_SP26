#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

/*TODO
- Learn about struct
- Relearn pointer wtf is it
*/

// A quick template for a value box, which can be used for displaying values of a char or for deco
void ValueBox(){
	char kt = 'a';
	
	printf("|%-10s |%-10s |%-10s |%-10s |%-10s |%-10s\n", "Name", "Value", "Dec", "Hex", "Oct", "Size");
	printf("|%-10s |%-10c |%-10u |%-10x |%-10o |%-10d", "kt", kt, kt, kt, kt, sizeof(kt));
	
	int integerVar = 10;
	long longVar = 1000;
	float floatVar = 13.5f;
	double doubleVar = 100.15;
	
	printf("%-15s\n", "Size (Bytes)");
	printf("----------------------------------\n");
	
	printf("charVar: %-15d\n",sizeof(kt));
	printf("integerVar: %-15d\n",sizeof(integerVar));
	printf("longVar: %-15d\n",sizeof(longVar));
	printf("floatVar: %-15d\n",sizeof(floatVar));
	printf("doubleVar: %-15d\n",sizeof(doubleVar));
}

// Inputcheck that returns int value 
int InputCheck(){
    int check;
    printf("> ");
    while(scanf("%d", &check) != 1){
        printf("Invalid");
        fflush(stdin);
    }
    return check;
}

// Inputcheck that returns flag value
int FlagInputCheck(){
    int check, flag;
    printf("> ");
    while(scanf("%d", &check) != 1 || check <= 0){
        flag = 1;
        fflush(stdin);
    }
    return flag;
}

//Find max of 3 numbers
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

//Print all of the ASCII characters from A to Z for some reason
void ASCIITable() {
	printf("Ma ASCII | Ky tu\n");
	for (int i = 65; i <= 90; i++) {
		printf("%8d | %c\n", i, (char)i);
	}
}

//Check for prime and count the primes can be used seperately or together
int isPrime(int n){
    if(n < 2) return 0;
    for(int i = 2; i <= n/2; i++){
        if(n % i == 0) return 0;
    }
    return 1;

}
int countPrimes(int a[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(isPrime(a[i])){
            count++;
        }
    }
    return count;
}

//Quick input for array
void InputArray(int a[], int n){
    for(int i = 0; i < n; i++){
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
    }
}

//Search for a vaule within an array
int SearchArray(int n, int size){
    for (int i = 0; i < size; i++){
        if (a[i] == n){
            return i;
        }
    }
    return -1;
}

//Remove the first value that matches the input value in the array
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

//Remove all values that match the input value in the array
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

//check the size of an array
size = sizeof(a) / sizeof(a[0])

//Output the array (Ascending order)
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

//Output the array (Descending order)
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

//Reverse the digits of a number
int ReverseNumber(){
    int n, dao = 0;
    
    do {
        printf("Nhap n: "); 
        scanf("%d", &n);
        if(n < 0)
            printf("\nSo khong hop le vui long nhap lai: ");
        fflush(stdin);
    } while(n < 0);
    
    while(n != 0){
        dao = dao * 10 + n % 10;
        n = n / 10;
    }
    printf("\nSo dao nguoc la: %d\n", dao);
    return 0;
}

//This ? (Chinh Phuong)
int isPerfectSquare(){
    int n, i = 0, sqr = 0;
    
    do {
        printf("Nhap n: ");
        fflush(stdin);

        if(sqr < n){
            i++;
            sqr = i * i;
        }
    
    } while(scanf("%d", &n) != 1 || n < 0);
    
    if(sqr == n){
        printf("\n%d la so chinh phuong cua %d", n, i);
    } 
    else{
        printf("\n%d khong phai la so chinh phuong", n);
    }
    return 0;
}

//Convert a number to binary
void Convert(int n){
	if(n>0){
		Convert(n / 2);
		printf("%d", n%2);
	}
}

//this ? (UCLN)
void BubbleSortDescending(int even[], int count) {
  for (int i = 0; i < count - 1; i++) {
    for (int j = 0; j < count - i - 1; j++) {
      if (even[j] < even[j + 1]) {
        int temp  = even[j];
        even[j]   = even[j + 1];
        even[j+1] = temp;
        }
    }
  }
}

//Vowel check
void filterString(char str[]) {
    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++) {
         char c = tolower(str[i]);
        
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            str[j++] = str[i];
        }
        //j++; here if counting vowels
    }
    str[j] = '\0';
}

//whatever this is
void InputSomething() {
    char input[101];
    if (fgets(input, sizeof(input), stdin)) {
        input[strcspn(input, "\n")] = 0;
    }
}


//
void Fget_Lens(){
    char str[1000];
    
    fgets(str, sizeof(str), stdin);
    
    int len = 0;
    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }
}


//Reverse a string
void ReverseString(char a[]){
    for (int i = len - 1; i >= 0; i--) {
    printf("%c", str[i]);
    }
}