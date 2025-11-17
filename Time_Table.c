#include <stdio.h>

int main()
{
    printf("TIME TABLE\n");
    char tt;
    printf("Enter the case (1,2,3,4): ");
    scanf(" %c", &tt);

    switch (tt) {
        case '1':
            printf("07:15AM to 08:00AM\n");
            printf("Period = Computer Programming LAB");
            break;

        case '2':
            printf("08:15AM to 09:00AM\n");
            printf("Period = MATHEMATICS");
            break;

        case '3':
            printf("10:15AM to 11:00AM\n");
            printf("Period = COMPUTER ORGANIZATION");
            break;

        case '4':
            printf("11:15AM to 12:00AM\n");
            printf("Period = PHYSICS LAB");
            break;

        default:
            printf("Invalid operator\n");
    }
}
