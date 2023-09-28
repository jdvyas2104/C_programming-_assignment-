#include <stdio.h>

// Function to calculate factorial using recursion
double factorial(int n) {
    if (n == 0 || n == 1) {
        return 1.0;
    } else {
        return (double)n * factorial(n - 1);
    }
}

int main() {
    int num;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        double result = factorial(num);
        printf("Factorial of %d is %lf\n", num, result);
    }

    return 0;
}
