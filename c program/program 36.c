#include <stdio.h>

// Define a structure for an employee
struct Employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};

int main() {
    // Define an array of structures for five employees
    struct Employee employees[5];

    // Input information for five employees
    printf("Enter information for five employees:\n");
    for (int i = 0; i < 5; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Enter Employee Number: ");
        scanf("%d", &employees[i].empno);
        printf("Enter Employee Name: ");
        scanf("%s", employees[i].empname);
        printf("Enter Address: ");
        scanf("%s", employees[i].address);
        printf("Enter Age: ");
        scanf("%d", &employees[i].age);
    }

    // Display information for all five employees
    printf("\nEmployee Information for Five Employees:\n");
    for (int i = 0; i < 5; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Employee Number: %d\n", employees[i].empno);
        printf("Employee Name: %s\n", employees[i].empname);
        printf("Address: %s\n", employees[i].address);
        printf("Age: %d\n", employees[i].age);
    }

    return 0;
}
