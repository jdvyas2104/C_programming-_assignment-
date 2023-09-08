#include <stdio.h>

int main() {
    int sumEven = 0, number;

    printf("Enter ten numbers:\n");

    for (int i = 1; i <= 10; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &number);
        if (number % 2 == 0) {
            sumEven += number;
        }
    }

    printf("Sum of even numbers: %d\n", sumEven);

    return 0;
}
