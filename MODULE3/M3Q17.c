//Q17. Write a program of structure for five employee that provides the following information print and display empno, empname, address and age
#include <stdio.h>

// Define a structure for employee information
struct Employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};

int main() {
    // Declare an array of structures to store information for five employees
    struct Employee employees[5];

    // Input information for each employee
    printf("Enter information for five employees:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nEmployee %d:\n", i + 1);

        printf("Enter Employee Number: ");
        scanf("%d", &employees[i].empno);

        printf("Enter Employee Name: ");
        scanf("%s", employees[i].empname);

        printf("Enter Address: ");
        scanf("%s", employees[i].address);

        printf("Enter Age: ");
        scanf("%d", &employees[i].age);
    }

    // Display information for each employee
    printf("\nEmployee Information:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Employee Number: %d\n", employees[i].empno);
        printf("Employee Name: %s\n", employees[i].empname);
        printf("Address: %s\n", employees[i].address);
        printf("Age: %d\n", employees[i].age);
    }

    return 0;
}
