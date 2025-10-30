#include <stdio.h>

int main()
{
    int people;

    printf("Enter number of people in the classroom: ");
    scanf("%d", &people);

    if (people > 0) {
        printf("\nPeople detected in classroom.\n");
        printf("Lights ON\n");
        printf("Fans ON\n");
    }
    else if (people == 0) {
        printf("\nNo one in classroom.\n");
        printf("Lights OFF\n");
        printf("Fans OFF\n");
    }
    else {
        printf("\nInvalid input! Number of people cannot be negative.\n");
    }

    return 0;
}
