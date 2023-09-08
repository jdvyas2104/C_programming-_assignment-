#include <stdio.h>

int main() {
    int sumOdd = 0, number;

    printf("Enter ten numbers:\n");

    for (int i = 1; i <= 10; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &number);
        if (number % 2 != 0) {
            sumOdd += number;
        }
    }

    printf("Sum of odd numbers: %d\n", sumOdd);

    return 0;
}
