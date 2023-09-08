#include <stdio.h>

int main() {
    int countEven = 0, number;

    printf("Enter ten numbers:\n");

    for (int i = 1; i <= 10; i++) {
        printf("num %d: ", i);
        scanf("%d", &number);
        if (number % 2 == 0) {
            countEven++;
        }
    }

    printf("Count of even numbers: %d\n", countEven);

    return 0;
}
