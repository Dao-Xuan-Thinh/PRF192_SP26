#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME "students.txt"
#define MAX_STUDENTS 500
#define MAX_NAME_LEN 50

typedef struct {
    int id;
    char firstName[MAX_NAME_LEN];
    char lastName[MAX_NAME_LEN];
    float gpa;
} Student;

/* ─── Load all students from file into array, returns count ─── */
int loadStudents(Student arr[]) {
    FILE *fp = fopen(FILENAME, "r");
    if (!fp) return 0;
    int count = 0;
    while (count < MAX_STUDENTS &&
           fscanf(fp, "%d,%49[^,],%49[^,],%f\n",
                  &arr[count].id,
                  arr[count].firstName,
                  arr[count].lastName,
                  &arr[count].gpa) == 4) {
        count++;
    }
    fclose(fp);
    return count;
}

/* ─── Save all students back to file ─── */
void saveStudents(Student arr[], int count) {
    FILE *fp = fopen(FILENAME, "w");
    if (!fp) { perror("Error saving file"); return; }
    for (int i = 0; i < count; i++)
        fprintf(fp, "%d,%s,%s,%.2f\n",
                arr[i].id, arr[i].firstName, arr[i].lastName, arr[i].gpa);
    fclose(fp);
}

/* ─── Print table header ─── */
void printHeader() {
    printf("\n%-6s %-15s %-15s %-6s\n", "ID", "First Name", "Last Name", "GPA");
    printf("%-6s %-15s %-15s %-6s\n",
           "------", "---------------", "---------------", "------");
}

/* ─── 1. Add Student ─── */
void addStudent(const char *filename) {
    /* Check for duplicate ID */
    Student arr[MAX_STUDENTS];
    int count = loadStudents(arr);

    Student s;
    printf("Enter Student ID: ");
    while (scanf("%d", &s.id) != 1) {
        printf("Invalid. Enter Student ID: ");
        while (getchar() != '\n');
    }
    getchar();

    /* Duplicate check */
    for (int i = 0; i < count; i++) {
        if (arr[i].id == s.id) {
            printf("Student ID %d already exists. Aborting.\n", s.id);
            return;
        }
    }

    printf("Enter First Name: ");
    fgets(s.firstName, MAX_NAME_LEN, stdin);
    s.firstName[strcspn(s.firstName, "\n")] = '\0';

    printf("Enter Last Name: ");
    fgets(s.lastName, MAX_NAME_LEN, stdin);
    s.lastName[strcspn(s.lastName, "\n")] = '\0';

    printf("Enter GPA: ");
    while (scanf("%f", &s.gpa) != 1 || s.gpa < 0.0f || s.gpa > 4.0f) {
        printf("Invalid GPA (0.0 - 4.0). Enter GPA: ");
        while (getchar() != '\n');
    }
    getchar();

    /* Append to file */
    FILE *fp = fopen(filename, "a");
    if (!fp) { perror("Error opening file"); return; }
    fprintf(fp, "%d,%s,%s,%.2f\n", s.id, s.firstName, s.lastName, s.gpa);
    fclose(fp);

    printf("Student added successfully.\n");
}

/* ─── 2. Display all students ─── */
void displayStudents(const char *filename) {
    Student arr[MAX_STUDENTS];
    int count = loadStudents(arr);
    if (count == 0) { printf("No student records found.\n"); return; }

    printf("\nAll Students:\n");
    printHeader();
    for (int i = 0; i < count; i++)
        printf("%-6d %-15s %-15s %-6.2f\n",
               arr[i].id, arr[i].firstName, arr[i].lastName, arr[i].gpa);
}

/* ─── 3. Search by ID ─── */
void searchStudentById(const char *filename, int id) {
    Student arr[MAX_STUDENTS];
    int count = loadStudents(arr);
    int found = 0;

    for (int i = 0; i < count; i++) {
        if (arr[i].id == id) {
            printf("\nStudent Found:\n");
            printf("--------------------------------\n");
            printf("ID         : %d\n",   arr[i].id);
            printf("First Name : %s\n",   arr[i].firstName);
            printf("Last Name  : %s\n",   arr[i].lastName);
            printf("GPA        : %.2f\n", arr[i].gpa);
            found = 1;
            break;
        }
    }
    if (!found)
        printf("No student found with ID %d.\n", id);
}

/* ─── 4. Search by Last Name ─── */
void searchStudentByLastName(const char *filename, const char *lastName) {
    Student arr[MAX_STUDENTS];
    int count = loadStudents(arr);
    int found = 0;

    for (int i = 0; i < count; i++) {
        if (strcasecmp(arr[i].lastName, lastName) == 0) {
            if (!found) {
                printf("\nStudent(s) Found:\n");
                printHeader();
            }
            printf("%-6d %-15s %-15s %-6.2f\n",
                   arr[i].id, arr[i].firstName, arr[i].lastName, arr[i].gpa);
            found = 1;
        }
    }
    if (!found)
        printf("No student found with last name \"%s\".\n", lastName);
}

/* ─── 5. Sort by Last Name (bubble sort) + save + display ─── */
void sortStudentsByLastName(const char *filename) {
    Student arr[MAX_STUDENTS];
    int count = loadStudents(arr);
    if (count == 0) { printf("No student records to sort.\n"); return; }

    /* Bubble sort */
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - 1 - i; j++) {
            if (strcasecmp(arr[j].lastName, arr[j + 1].lastName) > 0) {
                Student tmp = arr[j];
                arr[j]     = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }

    /* Save sorted data back to file */
    saveStudents(arr, count);

    printf("\nStudents Sorted by Last Name:\n");
    printHeader();
    for (int i = 0; i < count; i++)
        printf("%-6d %-15s %-15s %-6.2f\n",
               arr[i].id, arr[i].firstName, arr[i].lastName, arr[i].gpa);
}

/* ─── Main Menu ─── */
int main() {
    int choice;
    do {
        printf("\n-- Student Management System --\n");
        printf("1. Add Student\n");
        printf("2. Search Student by ID\n");
        printf("3. Search Student by Last Name\n");
        printf("4. Display Students Sorted by Last Name\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n');
            choice = 0;
            continue;
        }
        getchar();

        switch (choice) {
            case 1:
                addStudent(FILENAME);
                break;
            case 2: {
                int id;
                printf("Enter Student ID to search: ");
                if (scanf("%d", &id) == 1) {
                    getchar();
                    searchStudentById(FILENAME, id);
                } else {
                    printf("Invalid ID.\n");
                    while (getchar() != '\n');
                }
                break;
            }
            case 3: {
                char lastName[MAX_NAME_LEN];
                printf("Enter Last Name to search: ");
                fgets(lastName, MAX_NAME_LEN, stdin);
                lastName[strcspn(lastName, "\n")] = '\0';
                searchStudentByLastName(FILENAME, lastName);
                break;
            }
            case 4:
                sortStudentsByLastName(FILENAME);
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}
