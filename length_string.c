#include <stdio.h>
/*
Name:REHAN AKHTAR ALI SHAIKH
UIN:251P038
DIV:C
Class:First Year Comp 1
Age:35
*/
int calculate_length(char str[]) {
    int length = 0; 
    while (str[length] != '\0') {
        length++;
    }

    return length;
}
int main() {
    char my_string[100];
    int length;         

    printf("Enter a string: ");
    fgets(my_string, sizeof(my_string), stdin);

    for (int i = 0; my_string[i] != '\0'; i++) {
        if (my_string[i] == '\n') {
            my_string[i] = '\0';
            break;
        }
    }

    length = calculate_length(my_string);
    printf("The length of the string \"%s\" is: %d\n", my_string, length);

    return 0;
}