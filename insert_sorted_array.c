// Program 3: Insert an Element into a Sorted Array in Order
#include <stdio.h>

int main() {
    int arr[10] = {10, 20, 30, 40, 50};  // Initial sorted array
    int n = 5;                           // Current number of elements
    int value = 35;                      // Value to insert
    int i;

    // Shift elements to make space for the new value
    for(i = n - 1; i >= 0 && arr[i] > value; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the value at the correct position
    arr[i + 1] = value;
    n++;  // Increase the size of the array

    // Display the updated array
    printf("Array after insertion: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
