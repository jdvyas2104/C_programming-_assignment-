#include <stdio.h>

int main() {
    int number, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    number = abs(number);

    while (number > 0) {
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }

    printf("The summation of the digits in the number is: %d\n", sum);

    return 0;
}
