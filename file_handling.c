#include <stdio.h>
#include <stdlib.h>

struct emp {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct emp e;
    FILE *fp;
    int choice;

    do {
        printf("\n1. Add Employee\n2. Display Employees\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            fp = fopen("emp.dat", "ab");
            printf("Enter ID: ");
            scanf("%d", &e.id);
            printf("Enter Name: ");
            scanf("%s", e.name);
            printf("Enter Salary: ");
            scanf("%f", &e.salary);
            fwrite(&e, sizeof(e), 1, fp);
            fclose(fp);
            printf("Record added.\n");
        }

        else if (choice == 2) {
            fp = fopen("emp.dat", "rb");
            if (!fp) {
                printf("No records found!\n");
                continue;
            }
            printf("\n--- Employee Records ---\n");
            while (fread(&e, sizeof(e), 1, fp))
                printf("%d  %s  %.2f\n", e.id, e.name, e.salary);
            fclose(fp);
        }

    } while (choice != 3);

    return 0;
}