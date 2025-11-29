#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", (ptr + i));  
    }

    printf("\nArray elements in reverse order:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", *(ptr + i));   
    }

    printf("\n");
    return 0;
}