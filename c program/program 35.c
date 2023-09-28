#include <stdio.h>

// Define a structure for an employee
struct Employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};

int main() {
    // Create an instance of the Employee structure
    struct Employee emp;

    // Input employee information
    printf("Enter Employee Number: ");
    scanf("%d", &emp.empno);
    printf("Enter Employee Name: ");
    scanf("%s", emp.empname);
    printf("Enter Address: ");
    scanf("%s", emp.address);
    printf("Enter Age: ");
    scanf("%d", &emp.age);

    // Display employee information
    printf("\nEmployee Information:\n");
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Address: %s\n", emp.address);
    printf("Age: %d\n", emp.age);

    return 0;
}
