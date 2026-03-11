#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME "products.bin"
#define MAX_NAME_LEN 50

typedef struct {
    int product_id;
    char product_name[MAX_NAME_LEN];
    float price;
    int quantity;
} Product;

/* ─── Helper: check for duplicate ID in file ─── */
int idExists(int id) {
    FILE *fp = fopen(FILENAME, "rb");
    if (!fp) return 0;
    Product p;
    while (fread(&p, sizeof(Product), 1, fp) == 1) {
        if (p.product_id == id) {
            fclose(fp);
            return 1;
        }
    }
    fclose(fp);
    return 0;
}

/* ─── Helper: read one product from user ─── */
Product inputProduct(int num) {
    Product p;
    printf("\nEnter details for product %d:\n", num);

    printf("  Product ID: ");
    while (scanf("%d", &p.product_id) != 1) {
        printf("  Invalid input. Product ID: ");
        while (getchar() != '\n');
    }
    getchar(); /* flush newline */

    printf("  Product Name: ");
    fgets(p.product_name, MAX_NAME_LEN, stdin);
    p.product_name[strcspn(p.product_name, "\n")] = '\0';

    printf("  Price: ");
    while (scanf("%f", &p.price) != 1 || p.price < 0) {
        printf("  Invalid input. Price: ");
        while (getchar() != '\n');
    }

    printf("  Quantity: ");
    while (scanf("%d", &p.quantity) != 1 || p.quantity < 0) {
        printf("  Invalid input. Quantity: ");
        while (getchar() != '\n');
    }
    getchar();
    return p;
}

/* ─── 1. Write Products (overwrite) ─── */
void writeProducts() {
    int n;
    printf("Enter the number of products to write: ");
    while (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid. Enter a positive number: ");
        while (getchar() != '\n');
    }
    getchar();

    FILE *fp = fopen(FILENAME, "wb");
    if (!fp) {
        perror("Error opening file");
        return;
    }

    for (int i = 1; i <= n; i++) {
        Product p = inputProduct(i);
        fwrite(&p, sizeof(Product), 1, fp);
    }
    fclose(fp);
    printf("Products have been written to the file successfully.\n");
}

/* ─── 2. Append Products ─── */
void appendProducts() {
    int n;
    printf("Enter the number of products to append: ");
    while (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid. Enter a positive number: ");
        while (getchar() != '\n');
    }
    getchar();

    FILE *fp = fopen(FILENAME, "ab");
    if (!fp) {
        perror("Error opening file");
        return;
    }

    for (int i = 1; i <= n; i++) {
        Product p = inputProduct(i);
        if (idExists(p.product_id)) {
            printf("  Warning: Product ID %d already exists. Skipping.\n", p.product_id);
            continue;
        }
        fwrite(&p, sizeof(Product), 1, fp);
    }
    fclose(fp);
    printf("Products have been appended to the file successfully.\n");
}

/* ─── 3. Read / Display Products ─── */
void readProducts() {
    FILE *fp = fopen(FILENAME, "rb");
    if (!fp) {
        printf("No product file found. Please write products first.\n");
        return;
    }

    printf("\nReading products from the file:\n");
    printf("%-12s %-25s %-10s %-10s\n", "Product ID", "Product Name", "Price", "Quantity");
    printf("%-12s %-25s %-10s %-10s\n",
           "----------", "-------------------------", "----------", "----------");

    Product p;
    int count = 0;
    while (fread(&p, sizeof(Product), 1, fp) == 1) {
        printf("%-12d %-25s %-10.2f %-10d\n",
               p.product_id, p.product_name, p.price, p.quantity);
        count++;
    }
    fclose(fp);

    if (count == 0)
        printf("(No records found.)\n");
    printf("%s\n", "----------");
}

/* ─── 4. Modify Product by ID ─── */
void modifyProduct() {
    int searchId;
    printf("Enter the Product ID to modify: ");
    while (scanf("%d", &searchId) != 1) {
        printf("Invalid. Product ID: ");
        while (getchar() != '\n');
    }
    getchar();

    FILE *fp = fopen(FILENAME, "r+b");
    if (!fp) {
        printf("No product file found. Please write products first.\n");
        return;
    }

    Product p;
    int found = 0;
    while (fread(&p, sizeof(Product), 1, fp) == 1) {
        if (p.product_id == searchId) {
            found = 1;
            printf("Product found. Enter new details:\n");

            printf("  New Product Name: ");
            fgets(p.product_name, MAX_NAME_LEN, stdin);
            p.product_name[strcspn(p.product_name, "\n")] = '\0';

            printf("  New Price: ");
            while (scanf("%f", &p.price) != 1 || p.price < 0) {
                printf("  Invalid. New Price: ");
                while (getchar() != '\n');
            }

            printf("  New Quantity: ");
            while (scanf("%d", &p.quantity) != 1 || p.quantity < 0) {
                printf("  Invalid. New Quantity: ");
                while (getchar() != '\n');
            }
            getchar();

            /* seek back one record and overwrite */
            fseek(fp, -(long)sizeof(Product), SEEK_CUR);
            fwrite(&p, sizeof(Product), 1, fp);
            printf("Product updated successfully.\n");
            break;
        }
    }

    fclose(fp);
    if (!found)
        printf("Product with ID %d not found.\n", searchId);
}

/* ─── Main Menu ─── */
int main() {
    int choice;
    do {
        printf("\n-- Product Management System --\n");
        printf("1. Write Products\n");
        printf("2. Append Products\n");
        printf("3. Read Products\n");
        printf("4. Modify Product\n");
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
            case 1: writeProducts();  break;
            case 2: appendProducts(); break;
            case 3: readProducts();   break;
            case 4: modifyProduct();  break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}
