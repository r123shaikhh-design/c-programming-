#include <stdio.h>
#include <string.h>

struct student_record {
    char name[50];
    int roll_number;
    float total_marks;
};

int main() {
    struct student_record s[5];
    int i, topper_index = 0;

    printf("Enter details of 5 students:\n");

    for (i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll_number);

        printf("Enter Total Marks: ");
        scanf("%f", &s[i].total_marks);
    }


    for (i = 1; i < 5; i++) {
        if (s[i].total_marks > s[topper_index].total_marks) {
            topper_index = i;
        }
    }

    printf("\n===== Topper Details =====\n");
    printf("Name        : %s\n", s[topper_index].name);
    printf("Roll Number : %d\n", s[topper_index].roll_number);
    printf("Marks       : %.2f\n", s[topper_index].total_marks);

    return 0;
}