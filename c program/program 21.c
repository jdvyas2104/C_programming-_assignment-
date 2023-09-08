

int main() {
    int number, firstDigit, lastDigit, sum;

    printf("Enter a number: ");
    scanf("%d", &number);

    lastDigit = abs(number % 10);

    while (number >= 10) {
        number /= 10;
    }
    firstDigit = abs(number);

    sum = firstDigit + lastDigit;

    printf("Sum of the first and last digits: %d\n", sum);

    return 0;
}
