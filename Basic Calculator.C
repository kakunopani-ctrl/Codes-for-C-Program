#include <stdio.h>

int main()
{
    char op;
    float a, b, ans;

    printf("Simple Calculator\n");
    printf("-----------------\n");

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);   // note the space before %c

    printf("Enter second number: ");
    scanf("%f", &b);

    if (op == '+') {
        ans = a + b;
        printf("Result = %.2f\n", ans);
    }
    else if (op == '-') {
        ans = a - b;
        printf("Result = %.2f\n", ans);
    }
    else if (op == '*') {
        ans = a * b;
        printf("Result = %.2f\n", ans);
    }
    else if (op == '/') {
        if (b == 0)
            printf("Cannot divide by zero!\n");
        else {
            ans = a / b;
            printf("Result = %.2f\n", ans);
        }
    }
    else {
        printf("Invalid operator!\n");
    }

    return 0;
}
