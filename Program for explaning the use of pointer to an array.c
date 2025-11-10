#include <stdio.h>  // ✅ Corrected header file

// Pointer to an array of 10 integers
void fill(int (*p)[10]) {
    for (int i = 0; i < 10; i++)
        (*p)[i] = i * i;
}

int main(void) {
    int a = 1, b = 2, c = 3;

    // Array of pointers to int
    int *arr[3] = {&a, &b, &c};

    for (int i = 0; i < 3; i++)
        printf("%d\n", *arr[i]);

    return 0;
}
