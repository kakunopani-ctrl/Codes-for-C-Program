#include <stdio.h>

typedef struct {
    int emp_id;
    char name[20];
    float salary;
} Employee;

int main() {
    Employee e1 = {112, "Panikardu", 900000.50};

    printf("Employee ID: %d\n", e1.emp_id);
    printf("Employee Name: %s\n", e1.name);
    printf("Employee Salary: %.2f\n", e1.salary);

    return 0;
}
