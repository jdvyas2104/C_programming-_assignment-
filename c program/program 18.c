#include <stdio.h>

int main() {
    long long number, reversedNumber = 0, remainder;

    printf("Enter a number: ");
    scanf("%lld", &number);

    while (number != 0) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    printf("Reversed number: %lld\n", reversedNumber);

    return 0;
}
