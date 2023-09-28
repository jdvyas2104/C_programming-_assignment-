#include <stdio.h>

int main() {
    int n1, n2;

    printf("first number: ");
    scanf("%d", &n1);
    printf("second number: ");
    scanf("%d", &n2);

    printf("Before  num1 = %d, num2 = %d\n", n1, n2);

    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;

    printf("After  num1 = %d, num2 = %d\n", n1, n2);

    return 0;
}
