#include <stdio.h>

int main() {
    int countOdd = 0, number;

    printf("Enter ten numbers:\n");

    for (int i = 1; i <= 10; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &number);
        if (number % 2 != 0) {
            countOdd++;
        }
    }

    printf("Count of odd numbers: %d\n", countOdd);

    return 0;
}
