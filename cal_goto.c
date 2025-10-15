#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

START:  // Label to jump back to
    printf("\n==== Simple Calculator ====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    if (choice == 5) {
        printf("Exiting the program.\n");
        return 0;
    }

    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
            break;

        case 2:
            result = num1 - num2;
            printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
            break;

        case 3:
            result = num1 * num2;
            printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
            break;

        case 4:
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                result = num1 / num2;
                printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
            }
            break;

        default:
            printf("Invalid choice. Please enter a number from 1 to 5.\n");
    }

    // Ask user if they want to continue
    char ch;
    printf("\nDo you want to perform another operation? (y/n): ");
    scanf(" %c", &ch); // space before %c to catch newline
    if (ch == 'y' || ch == 'Y') {
        goto START;
    } else {
        printf("Thanks for using the calculator. Goodbye!\n");
    }

    return 0;
}


    


