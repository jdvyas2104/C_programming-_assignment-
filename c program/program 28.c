#include <stdio.h>

int main() {
    int choice;
    double num1, num2;

    printf("Menu-Driven Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Quit\n");

    while (1) {
        printf("Enter your choice (1/2/3/4/5): ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Calculator program terminated.\n");
            break;
        }

        if (choice < 1 || choice > 5) {
            printf("Invalid .\n");
            continue;
        }

        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);

        switch (choice) {
            case 1:
                printf("Result: %.2lf\n",  num1 + num2);
                break;
            case 2:
                printf("Result: %.2lf\n",  num1 - num2);
                break;
            case 3:
                printf("Result: %.2lf\n",  num1 * num2);
                break;
            case 4:
                if (num2 == 0) {
                    printf("invalid.\n");
                } else {
                    printf("Result: %.2lf\n",  num1 / num2);
                }
                break;
        }
    }

    return 0;
}
