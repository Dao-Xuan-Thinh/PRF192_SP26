#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//Max cho dễ kiểm soát có thể tăng lên nếu cần
#define MAX_STUDENTS 100

typedef struct {
    int id;
    char first_name[50];
    char last_name[50];
    float gpa;
} Student;

void menu(){
    printf(
        "--- Student Management System ---\n"
        "1. Add Student\n"
        "2. Search Student by ID\n"
        "3. Search Student by Last Name\n"
        "4. Display Students sorted by Last Name\n"
        "5. Exit\n"
    );
}

//Load data từ txt file vào trong array struct
int loadStudents(Student students[], int max) {
    FILE *fp = fopen("Student_Data.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 0;
    }
    
    //count để không bị overflow
    int count = 0;
    while (count < max && fscanf(fp, "%d,%[^,],%[^,],%f\n", /*[^,] = read all except , */
                                        &students[count].id,
                                        students[count].first_name,
                                        students[count].last_name,
                                        &students[count].gpa) == 4){
        count++;
    }
    fclose(fp);
    return count;
}

//Lưu data vào txt file mà không xóa dữ liệu cũ
void add(){
    FILE* fp = fopen("Student_Data.txt", "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    int flag = 0;
    Student s;
    do{
        flag = 0;
        printf("Enter Student ID: ");
        if(scanf("%d", &s.id) != 1){
            printf("Invalid input! Please enter a valid integer for ID.\n");
            while(getchar() != '\n');
            flag = 1;
            continue;
        }

        //Reminder to switch this to fgets :3
        printf("Enter First Name: ");
        scanf("%s", s.first_name);
        printf("Enter Last Name: ");
        scanf("%s", s.last_name);

        printf("Enter GPA: ");
        if(scanf("%f", &s.gpa) != 1){
            printf("Invalid input! Please enter a valid float for GPA.\n");
            while(getchar() != '\n');
            flag = 1;
            continue;
        }
    }while(flag == 1);

    fprintf(fp, "%d,%s,%s,%.2f\n", s.id, s.first_name, s.last_name, s.gpa);
    fclose(fp);
}

void search_by_id(int id){
    Student students[MAX_STUDENTS];
    int count = loadStudents(students, MAX_STUDENTS);
    int found = 0;
 
    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {
            //Maybe turn this into a void func for better code reusibility
            printf("\nStudent Found:\n");
            printf("--------------------------------\n");
            printf("ID         : %d\n", students[i].id);
            printf("First Name : %s\n", students[i].first_name);
            printf("Last Name  : %s\n", students[i].last_name);
            printf("GPA        : %.2f\n", students[i].gpa);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("No student found with ID %d.\n", id);
    }
}

void search_by_last_name(char last_name[]){
    Student students[MAX_STUDENTS];
    int count = loadStudents(students, MAX_STUDENTS);
    int found = 0;
 
    for (int i = 0; i < count; i++) {
        if (strcmp(students[i].last_name, last_name) == 0) {
            //To make absolutely sure this print no matter what saved me some lines of code
            if (found == 0) {
                //this too the same reason as the one in search_by_id
                printf("\nStudent Found:\n");
                printf("--------------------------------\n");
            }
            printf("ID         : %d\n", students[i].id);
            printf("First Name : %s\n", students[i].first_name);
            printf("Last Name  : %s\n", students[i].last_name);
            printf("GPA        : %.2f\n", students[i].gpa);
            printf("--------------------------------\n");
            found = 1;
        }
    }
    if (found == 0) {
        printf("No student found with last name \"%s\".\n", last_name);
    }
}

void display(){
    Student students[MAX_STUDENTS];
    int count = loadStudents( students, MAX_STUDENTS);
 
    if (count == 0) {
        printf("No student records found.\n");
        return;
    }
 
    //Bubble sort algorithm to sort students by last name that i stole from the internet and have no idea how it works :3 if you(me) ever read this comment again, please do the research ty
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (strcmp(students[j].last_name, students[j + 1].last_name) > 0) {
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    printf("\nStudents Sorted by Last Name:\n");
    printf("%-6s %-15s %-15s %-5s\n", "ID", "First Name", "Last Name", "GPA");
    printf("-----------------------------------------------\n");
    for (int i = 0; i < count; i++) {
        printf("%-6d %-15s %-15s %.2f\n",
               students[i].id,
               students[i].first_name,
               students[i].last_name,
               students[i].gpa);
    }
}


int main(){
    int chocie, id;
    char last_name[20];

    do{
        menu();
        printf("Enter your choice: ");
        scanf("%d", &chocie);

        switch(chocie){
            case 1:
                add();
                break;
            case 2:
                printf("Enter Student ID to search: ");
                scanf("%d", &id);
                search_by_id(id);
                break;
            case 3:
                printf("Enter Student Last Name to search: ");
                scanf("%s", last_name);
                search_by_last_name(last_name);
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Bye :3:3:3:3:3:3:3:3:3\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }

    }while(chocie != 5);
    return 0;
}