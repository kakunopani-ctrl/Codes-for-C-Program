#include <stdio.h>

struct date {
    int day;
    int month;
    int year;
};

struct student {
    char name[20];
    struct date dob;
};

int main() {
    struct student s1 = {"Panikardu", {29, 01, 2002}};

    printf("Name: %s\n", s1.name);
    printf("Date of Birth: %02d/%02d/%d\n", s1.dob.day, s1.dob.month, s1.dob.year);

    return 0;
}
