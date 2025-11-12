// Program 4b: Accessing Array Using Pointer
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};  // Declare and initialize array
    int *p = arr;                      // Pointer to first element

    printf("Array elements using pointer: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", *(p + i));       // Access elements using pointer arithmetic

    return 0;
}
