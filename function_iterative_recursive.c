#include <stdio.h>
/* NAME REHAN AKHTAR ALI SHAIKH 
UIN 251P038
ROLL ON 35
CLASS COMPUTER C2 */

long long factorialIterative(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

long long factorialRecursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorialRecursive(n - 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial (Iterative): %lld\n", factorialIterative(num));
    printf("Factorial (Recursive): %lld\n", factorialRecursive(num));
    return 0;
}