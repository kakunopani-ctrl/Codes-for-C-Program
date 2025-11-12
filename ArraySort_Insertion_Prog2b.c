
#include <stdio.h>

int main() {
    int arr[5] = {25, 12, 22, 64, 11};  // Initial unsorted array
    int i, key, j;

    // Insertion Sort Algorithm
    for(i = 1; i < 5; i++) {
        key = arr[i];       // Element to be inserted
        j = i - 1;

        // Shift elements greater than key to one position ahead
        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;   // Insert key at correct position
    }

    // Print the sorted array
    printf("Sorted Array: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
