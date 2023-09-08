#include <stdio.h>

int main() {
    float pri, rate, time, in;

    printf("Enter the principal amount: ");
    scanf("%f", &pri);

    printf("Enter the annual interest rate : ");
    scanf("%f", &rate);

    printf("Enter the time period : ");
    scanf("%f", &time);

    in = (pri * rate * time) / 100;

    printf("Simple Interest = %.2f\n", in);

    return 0;
}

