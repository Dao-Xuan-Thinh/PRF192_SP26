/*
================================================================================
   C PROGRAMMING CHEAT SHEET  -  PRF192 Freshman Edition
   Everything you need for your test. Read top to bottom.
================================================================================
*/

#include <stdio.h>      // printf, scanf, fgets, fopen, fclose, fread, fwrite, fseek
#include <stdlib.h>     // malloc, free, exit, atoi, atof
#include <string.h>     // strlen, strcpy, strcmp, strcasecmp, strcat, strcspn
#include <math.h>       // sqrt, pow, fabs  (compile with -lm flag)
#include <ctype.h>      // toupper, tolower, isdigit, isalpha, isspace

/* ============================================================
   1. BASIC DATA TYPES
   ============================================================ */
void basicTypes() {
    int    a  = 10;           // whole numbers  (-2B to 2B)
    float  b  = 3.14f;        // decimal  (~7 sig digits)
    double c  = 3.14159265;   // decimal  (~15 sig digits)
    char   d  = 'A';          // single character
    char   s[50] = "Hello";   // string = char array

    // Checking sizes
    printf("int=%zu bytes\n", sizeof(int));

    // Constants (can't be changed after set)
    const float PI = 3.14159f;
    #define MAX 100            // another way to define constant
}

/* ============================================================
   2. PRINTF / SCANF FORMAT SPECIFIERS
   ============================================================
   %d   → int
   %f   → float / double  (printf)
   %lf  → double          (scanf only)
   %c   → char
   %s   → string (char array)
   %ld  → long int
   %zu  → size_t (sizeof)

   Width/precision:
   %-10s  → left-align string in 10 chars
   %10d   → right-align int in 10 chars
   %.2f   → float with 2 decimal places
   %-10.2f → left-aligned float, 2 decimal places
*/
void printfScans() {
    int age;
    float gpa;
    char name[50];

    printf("Enter age: ");
    scanf("%d", &age);        // & required for int/float

    printf("Enter GPA: ");
    scanf("%f", &gpa);

    getchar();                // flush leftover newline after scanf

    printf("Enter name: ");
    fgets(name, 50, stdin);                    // safer than scanf for strings
    name[strcspn(name, "\n")] = '\0';          // remove trailing newline

    printf("Name: %-15s Age: %3d GPA: %.2f\n", name, age, gpa);
}

/* ============================================================
   3. OPERATORS
   ============================================================ */
void operators() {
    int a = 10, b = 3;

    // Arithmetic
    int sum  = a + b;   // 13
    int diff = a - b;   // 7
    int prod = a * b;   // 30
    int quot = a / b;   // 3  (integer division!)
    int rem  = a % b;   // 1  (modulo / remainder)

    // Compound assignment
    a += 5;   // a = a + 5
    a -= 2;   // a = a - 2
    a *= 3;
    a /= 2;
    a++;      // increment by 1
    a--;      // decrement by 1

    // Comparison (result is 1=true or 0=false)
    // ==  !=  <  >  <=  >=

    // Logical
    // &&  (AND)    ||  (OR)    !  (NOT)
}

/* ============================================================
   4. IF / ELSE / ELSE IF
   ============================================================ */
void conditions() {
    int score = 75;

    if (score >= 90) {
        printf("A\n");
    } else if (score >= 80) {
        printf("B\n");
    } else if (score >= 70) {
        printf("C\n");
    } else {
        printf("F\n");
    }

    // Ternary operator (short if-else)
    int max = (score > 50) ? score : 50;
}

/* ============================================================
   5. SWITCH STATEMENT
   ============================================================ */
void switchExample() {
    int choice = 2;

    switch (choice) {
        case 1:
            printf("Option 1\n");
            break;
        case 2:
            printf("Option 2\n");
            break;
        case 3:
            printf("Option 3\n");
            break;
        default:
            printf("Invalid choice\n");
    }
    // ALWAYS use break! Without it, execution falls through to next case.
}

/* ============================================================
   6. LOOPS
   ============================================================ */
void loops() {
    // FOR loop (when you know how many times)
    for (int i = 0; i < 5; i++) {
        printf("%d ", i);   // 0 1 2 3 4
    }

    // WHILE loop (while condition is true)
    int n = 0;
    while (n < 5) {
        printf("%d ", n);
        n++;
    }

    // DO-WHILE loop (runs at least once — great for menus!)
    int choice;
    do {
        printf("Enter 1-3: ");
        scanf("%d", &choice);
    } while (choice < 1 || choice > 3);

    // break  → exit loop immediately
    // continue → skip to next iteration
    for (int i = 0; i < 10; i++) {
        if (i == 5) break;        // stops at 5
        if (i % 2 == 0) continue; // skips even numbers
        printf("%d ", i);         // prints 1 3
    }
}

/* ============================================================
   7. ARRAYS
   ============================================================ */
void arrays() {
    // 1D array
    int nums[5] = {10, 20, 30, 40, 50};
    printf("%d\n", nums[2]);         // 30  (index starts at 0!)

    // Loop through array
    int len = 5;
    for (int i = 0; i < len; i++) {
        printf("%d ", nums[i]);
    }

    // 2D array  (rows x columns)
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    printf("%d\n", matrix[1][2]);    // 6

    // Loop 2D array
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            printf("%3d", matrix[r][c]);
        }
        printf("\n");
    }
}

/* ============================================================
   8. STRINGS (char arrays)
   ============================================================ */
void strings() {
    char s1[50] = "Hello";
    char s2[50] = "World";

    printf("%zu\n", strlen(s1));        // length = 5
    strcpy(s1, "New text");             // copy into s1
    strcat(s1, " appended");            // append to s1
    printf("%d\n", strcmp(s1, s2));     // 0=equal, <0 s1<s2, >0 s1>s2
    printf("%d\n", strcasecmp(s1, s2)); // same but case-insensitive

    // Remove newline left by fgets
    s1[strcspn(s1, "\n")] = '\0';

    // Access individual chars
    for (int i = 0; s1[i] != '\0'; i++) {
        printf("%c", toupper(s1[i]));   // print uppercase
    }
}

/* ============================================================
   9. FUNCTIONS
   ============================================================ */
// Declare (prototype) before main if defined after main
int add(int a, int b);
void greet(char name[]);
float average(int arr[], int size);

int add(int a, int b) {
    return a + b;
}

void greet(char name[]) {        // void = returns nothing
    printf("Hello, %s!\n", name);
}

float average(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) sum += arr[i];
    return (float)sum / size;    // cast to float for decimal result
}

// Pass by pointer (modify original variable)
void doubleIt(int *x) {
    *x = *x * 2;
}
// Usage: doubleIt(&myVar);

/* ============================================================
   10. POINTERS
   ============================================================ */
void pointers() {
    int x = 5;
    int *p = &x;        // p stores ADDRESS of x

    printf("%d\n", x);   // 5  — value of x
    printf("%p\n", p);   // address (like 0x7ffee...)
    printf("%d\n", *p);  // 5  — value AT the address (dereference)

    *p = 99;             // changes x through pointer
    printf("%d\n", x);   // 99

    // Pointer arithmetic (useful for arrays)
    int arr[3] = {1, 2, 3};
    int *ptr = arr;       // points to first element
    printf("%d\n", *(ptr + 1));  // 2 (second element)
}

/* ============================================================
   11. STRUCTS
   ============================================================ */
typedef struct {
    int   id;
    char  name[50];
    float gpa;
} Student;

void structExample() {
    // Single struct
    Student s1;
    s1.id = 101;
    strcpy(s1.name, "John");
    s1.gpa = 3.75f;

    // Struct with initializer
    Student s2 = {102, "Alice", 3.90f};

    printf("ID: %d  Name: %s  GPA: %.2f\n", s1.id, s1.name, s1.gpa);

    // Array of structs
    Student class[3] = {
        {101, "John",  3.75f},
        {102, "Alice", 3.90f},
        {103, "Bob",   3.50f}
    };

    for (int i = 0; i < 3; i++) {
        printf("%-5d %-15s %.2f\n", class[i].id, class[i].name, class[i].gpa);
    }

    // Pointer to struct
    Student *ptr = &s1;
    printf("%s\n", ptr->name);   // use -> instead of . with pointers
}

/* ============================================================
   12. FILE I/O — TEXT FILES
   ============================================================ */
void textFiles() {
    // WRITE to text file
    FILE *fp = fopen("data.txt", "w");   // "w"=overwrite, "a"=append, "r"=read
    if (fp == NULL) {
        perror("Error opening file");
        return;
    }
    fprintf(fp, "%d,%s,%.2f\n", 101, "John", 3.75);
    fclose(fp);

    // READ from text file
    fp = fopen("data.txt", "r");
    if (fp == NULL) { perror("Error"); return; }

    int id; char name[50]; float gpa;
    while (fscanf(fp, "%d,%49[^,],%f\n", &id, name, &gpa) == 3) {
        printf("%d %s %.2f\n", id, name, gpa);
    }
    fclose(fp);

    // Read line by line
    char line[100];
    fp = fopen("data.txt", "r");
    while (fgets(line, sizeof(line), fp) != NULL) {
        line[strcspn(line, "\n")] = '\0';
        printf("%s\n", line);
    }
    fclose(fp);
}

/* ============================================================
   13. FILE I/O — BINARY FILES
   ============================================================ */
typedef struct {
    int   product_id;
    char  product_name[50];
    float price;
    int   quantity;
} Product;

void binaryFiles() {
    // WRITE binary
    FILE *fp = fopen("products.bin", "wb");  // "wb"=write binary
    if (!fp) { perror("Error"); return; }

    Product p = {101, "Laptop", 750.00f, 15};
    fwrite(&p, sizeof(Product), 1, fp);      // write 1 Product
    fclose(fp);

    // APPEND binary
    fp = fopen("products.bin", "ab");        // "ab"=append binary
    Product p2 = {102, "Phone", 500.00f, 30};
    fwrite(&p2, sizeof(Product), 1, fp);
    fclose(fp);

    // READ binary
    fp = fopen("products.bin", "rb");        // "rb"=read binary
    Product buf;
    while (fread(&buf, sizeof(Product), 1, fp) == 1) {
        printf("%-5d %-20s %.2f %d\n",
               buf.product_id, buf.product_name, buf.price, buf.quantity);
    }
    fclose(fp);

    // MODIFY specific record (by ID)
    fp = fopen("products.bin", "r+b");       // "r+b"=read+write binary
    while (fread(&buf, sizeof(Product), 1, fp) == 1) {
        if (buf.product_id == 101) {
            strcpy(buf.product_name, "Gaming Laptop");
            buf.price = 900.00f;
            fseek(fp, -(long)sizeof(Product), SEEK_CUR);  // go back one record
            fwrite(&buf, sizeof(Product), 1, fp);          // overwrite
            break;
        }
    }
    fclose(fp);
}

/* ============================================================
   14. DYNAMIC MEMORY (malloc / free)
   ============================================================ */
void dynamicMemory() {
    // Allocate memory for 5 ints
    int *arr = (int*)malloc(5 * sizeof(int));
    if (arr == NULL) { printf("Memory error\n"); return; }

    for (int i = 0; i < 5; i++) arr[i] = i * 10;
    for (int i = 0; i < 5; i++) printf("%d ", arr[i]);

    free(arr);   // ALWAYS free when done!

    // Allocate a struct dynamically
    Student *s = (Student*)malloc(sizeof(Student));
    s->id = 101;
    strcpy(s->name, "John");
    s->gpa = 3.75f;
    free(s);
}

/* ============================================================
   15. SORTING — BUBBLE SORT
   ============================================================ */
void bubbleSortInts(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {       // swap if out of order
                int tmp  = arr[j];
                arr[j]   = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

// Sort array of structs by last name (string version)
void bubbleSortByName(Student arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (strcasecmp(arr[j].name, arr[j + 1].name) > 0) {
                Student tmp = arr[j];
                arr[j]      = arr[j + 1];
                arr[j + 1]  = tmp;
            }
        }
    }
}

/* ============================================================
   16. SEARCHING — LINEAR SEARCH
   ============================================================ */
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) return i;   // return index if found
    }
    return -1;   // not found
}

/* ============================================================
   17. COMMON MATH FUNCTIONS  (need #include <math.h>)
   ============================================================ */
void mathFuncs() {
    printf("%.2f\n", sqrt(16.0));     // 4.00
    printf("%.2f\n", pow(2.0, 10));   // 1024.00
    printf("%.2f\n", fabs(-5.5));     // 5.50  (absolute value float)
    printf("%d\n",   abs(-5));        // 5     (absolute value int)
}

/* ============================================================
   18. MENU-DRIVEN PROGRAM TEMPLATE
   ============================================================ */
void menuTemplate() {
    int choice;
    do {
        printf("\n=== My Program ===\n");
        printf("1. Option One\n");
        printf("2. Option Two\n");
        printf("3. Exit\n");
        printf("Enter choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input!\n");
            while (getchar() != '\n');  // clear input buffer
            choice = 0;
            continue;
        }
        getchar();  // flush newline

        switch (choice) {
            case 1: printf("You chose Option One\n"); break;
            case 2: printf("You chose Option Two\n"); break;
            case 3: printf("Goodbye!\n");             break;
            default: printf("Invalid! Try 1-3.\n");
        }
    } while (choice != 3);
}

/* ============================================================
   19. INPUT VALIDATION PATTERNS
   ============================================================ */
void inputValidation() {
    int n;

    // Validate integer input
    printf("Enter a positive number: ");
    while (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid! Try again: ");
        while (getchar() != '\n');   // clear bad input from buffer
    }
    getchar();

    // Validate float range
    float gpa;
    printf("Enter GPA (0.0-4.0): ");
    while (scanf("%f", &gpa) != 1 || gpa < 0.0f || gpa > 4.0f) {
        printf("Invalid! Try again: ");
        while (getchar() != '\n');
    }
    getchar();
}

/* ============================================================
   20. USEFUL STRING TRICKS
   ============================================================ */
void stringTricks() {
    char s[50] = "Hello World";

    // Length
    int len = strlen(s);              // 11

    // Compare (case-sensitive)
    if (strcmp(s, "Hello World") == 0) printf("Match!\n");

    // Compare (case-insensitive)
    if (strcasecmp(s, "hello world") == 0) printf("Match!\n");

    // Copy
    char copy[50];
    strcpy(copy, s);

    // Concatenate
    strcat(copy, "!!!");              // "Hello World!!!"

    // Convert char digit to int
    char ch = '7';
    int  num = ch - '0';              // num = 7

    // Check character type
    if (isdigit(ch))  printf("digit\n");
    if (isalpha(ch))  printf("letter\n");
    if (isspace(ch))  printf("space\n");

    // Upper/lowercase
    char upper = toupper('a');        // 'A'
    char lower = tolower('Z');        // 'z'

    // Remove newline from fgets output (IMPORTANT!)
    char line[50];
    fgets(line, 50, stdin);
    line[strcspn(line, "\n")] = '\0'; // replaces \n with null terminator
}

/* ============================================================
   21. COMMON MISTAKES TO AVOID
   ============================================================
   ❌  if (a = 5)         → assigns 5, use == for comparison
   ❌  int arr[5]; arr[5] → index out of bounds! (0-4 only)
   ❌  scanf("%s", name)  → use fgets instead (safer)
   ❌  fopen without NULL check → always check if file opened
   ❌  forgetting fclose  → always close files!
   ❌  forgetting & in scanf("%d", &n)  → & required for non-strings
   ❌  no break in switch → causes fall-through to next case
   ❌  forgetting getchar() after scanf → newline stays in buffer,
       breaks next fgets call
   ❌  integer division: 5/2 = 2, not 2.5 → cast: (float)5/2 = 2.5
*/

/* ============================================================
   22. QUICK REFERENCE CARD
   ============================================================
   Open file modes:
     "r"   read text        "rb"  read binary
     "w"   write text       "wb"  write binary  (overwrites!)
     "a"   append text      "ab"  append binary
     "r+"  read+write text  "r+b" read+write binary

   fseek positions:
     SEEK_SET → from beginning of file
     SEEK_CUR → from current position
     SEEK_END → from end of file
   Example: fseek(fp, 0, SEEK_SET);  → go to start of file
            fseek(fp, -sizeof(X), SEEK_CUR); → go back one record

   sizeof:
     sizeof(int)     = 4 bytes
     sizeof(float)   = 4 bytes
     sizeof(double)  = 8 bytes
     sizeof(char)    = 1 byte
     sizeof(struct)  = sum of all fields (may vary due to padding)

   Cast:
     (int)3.9        = 3
     (float)5/2      = 2.5
     (char)65        = 'A'
*/

int main() {
    printf("This file is a cheat sheet — read the comments!\n");
    printf("Compile: gcc coding_C.c -o program -lm\n");
    printf("Run:     ./program\n");
    return 0;
}
