#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};  // Declare and initialize array
    int count = sizeof(arr) / sizeof(arr[0]);  // Calculate number of elements

    printf("Total number of elements in the array = %d\n", count);
    return 0;
}
