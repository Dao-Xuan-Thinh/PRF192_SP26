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

//ASCII Table
void ASCIITable() {
	printf("Ma ASCII | Ky tu\n");
	for (int i = 65; i <= 90; i++) {
		printf("%8d | %c\n", i, (char)i);
	}
}

//fgets + Dynamic Array + Lens + get rid of \n
  char a[101];
  fgets(a, sizeof(a), stdin);
  int len = strlen(a);
  

  for(int i = 0; i < len; i++){
    if(a[i] == '\n'){
      a[i] = ' ';
    }
  }

//Vowel count with tolower (Case insensitive)
int VowelCount(char input[]){
    int len = strlen(input);
    int vowels = 0;
    for (int i = 0; i < len; i++){
        char c = tolower(*(input + i));
        if (c == 'o' || c == 'e' || c == 'a' || c == 'i' || c == 'u'){
            vowels++;
        }
    }
    return vowels;
}

//Reverse a string in place (without using extra space) (Index)
void Reverse(char input[]){
    int len = strlen(input);
    for(int i = 0; i < len/2; i++){
        char temp = input[i];
        input[i] = input[len - 1 - i];
        input[len - 1 - i] = temp;
    }
    printf("%s", input);
}

//Reverse a string in place (without using extra space) (Pointer)
void Reverse(char input[]){
    char *start = input;
    char *end = input + strlen(input) - 1;
    char temp;
    while(start < end){
        temp = *start;
        *start = *end;
        *end = temp;   
        start++;
        end--;
    }
}

//print a pyramid of stars with n levels
void PrintPyramid(int n){
  for(int i = 0; i < n; i++){
    int space = n - 1 - i;
    for (int s = 0; s < space; s++){
      printf(" ");
    }
  

    int stars = 2 * i + 1;
    for (int s = 0; s < stars; s++) {
        printf("*");
    }
  
    if (i < n - 1) printf("\n");
  }
}

//Remove \0 and \n from a string
while (a[len] != '\0' && a[len] != '\n'){
    len++;
}

//Palindrome check
void PalindromeCheck(char a[]){
    int len = strlen(a);
    for(int i = 0; i < len/2; i++){
        if(a[i] == a[len - 1 - i]){
            flag = 1;
        }       
    }

    if (flag == 1){
        printf("yes");
    }

    else{
        printf("no");
    }
}

//Counts digits, letters, other chars using isdigit/isalpha
void CountDigitsLetters(char a[]){
    int len = strlen(a);
    int letters = 0, digits = 0, others = 0;
    for (int i = 0; i < len; i++) {
        if (isalpha(a[i]))
            letters++;
        else if (isdigit(a[i]))
            digits++;
        else    
            others++;
    }
}

//Perfect number check
void PerfectNumberCheck(int n){
    int sum = 0;
    for (int i = 1; i < n; i++){
        if (n % i == 0){
            sum += i;
        }
    }
    if (sum == n){
        printf("%d is a perfect number", n);
    }
    else{
        printf("%d is not a perfect number", n);
    }
}

//Display the difference between the max and min values in an array
int findDifference(int a[], int n) {
  int max = a[0];
  for (int i = 0; i < n; i++){
    if(max < a[i]){
      max = a[i];
    }
  }

  int min = a[0];
  for (int i = 0; i < n; i++){
    if(min > a[i]){
      min = a[i];
    }
  }

  int result = 0;
  result = max - min;

  return result;
}

//Swap the smallest value with the largest value
void swapMinMax(int a[], int n){
  int max = 0;
  for (int i = 0; i < n; i++){
    if(a[max] < a[i]){
      max = i;
    }
  }

  int min = 0;
  for (int i = 0; i < n; i++){
    if(a[min] > a[i]){
      min = i;
    }
  }

  int temp = a[min];
  a[min] = a[max];
  a[max] = temp;

  for (int i = 0; i < n; i++){
    printf("%d ", a[i]);
  }
}

//Cap the first two letters of each word in a string
void CapFirstTwoLetters(char a[]){
    int len = strlen(a);
    int count = 0;
    for(int i = 0; i < len; i++){
        if(a[i] == ' '){
          printf("%c", a[i]);
          count = 0;
        }
        else if(count < 2){
          printf("%c", toupper(a[i]));
          count++;
        }
         else{
          printf("%c", a[i]);
          count++;
        }
    }
}   