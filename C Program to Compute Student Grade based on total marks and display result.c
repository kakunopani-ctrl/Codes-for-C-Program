#include <stdio.h>

int main()
{
    int sub1, sub2, sub3;
    float avg;

    printf("Enter marks for 3 subjects (out of 100):\n");
    scanf("%d%d%d", &sub1, &sub2, &sub3);

    if (sub1 < 50 || sub2 < 50 || sub3 < 50) {
        printf("\nResult: Fail\n");
        printf("Reason: Marks below 50 in one or more subjects.\n");
    }
    else {
        avg = (sub1 + sub2 + sub3) / 3.0;

        printf("\nAverage Marks = %.2f\n", avg);

        if (avg >= 90)
            printf("Grade: A\n");
        else if (avg >= 80)
            printf("Grade: B\n");
        else if (avg >= 70)
            printf("Grade: C\n");
        else if (avg >= 60)
            printf("Grade: D\n");
        else if (avg >= 50)
            printf("Grade: E\n");

        printf("Result: Pass\n");
    }

    return 0;
}
