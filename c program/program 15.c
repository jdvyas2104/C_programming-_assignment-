#include <stdio.h>

int main() {
    int number, limit;

    printf("Enter a number and a limit: ");
    scanf("%d %d", &number, &limit);

    printf("Multiplication table for %d up to %d:\n", number, limit);

    for (int i = 1; i <= limit; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}
