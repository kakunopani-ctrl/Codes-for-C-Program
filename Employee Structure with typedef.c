#include <stdio.h>

typedef struct {
    int empID;
    char name[50];
    float salary;
} Employee;

int main() {
    Employee employees[3];
    int i, highestIndex = 0;

    // Input details of 3 employees
    for (i = 0; i < 3; i++) {
        printf("Enter details of employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &employees[i].empID);
        printf("Name: ");
        scanf(" %[^\n]", employees[i].name);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        printf("\n");
    }

    // Find employee with highest salary
    for (i = 1; i < 3; i++) {
        if (employees[i].salary > employees[highestIndex].salary) {
            highestIndex = i;
        }
    }

    // Print employee with highest salary
    printf("\n--- Employee with Highest Salary ---\n");
    printf("Employee ID: %d\n", employees[highestIndex].empID);
    printf("Name       : %s\n", employees[highestIndex].name);
    printf("Salary     : %.2f\n", employees[highestIndex].salary);

    return 0;
}
