// Program 4b: Allocate Memory Using calloc() and Display Values

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;

    // Allocate memory for 5 integers, initialized to 0
    arr = (int *) calloc(5, sizeof(int));

    // Check if allocation was successful
    if (arr == NULL) {
        printf("Allocation failed\n");
        return 1;
    }

    // Display values stored in the allocated memory
    for (int i = 0; i < 5; i++)
        printf("arr[%d] = %d\n", i, arr[i]);

    // Free the allocated memory
    free(arr);
    return 0;
}
