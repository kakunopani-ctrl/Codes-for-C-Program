#include <stdio.h>

// Function to perform linear search
int linearSearch(int arr[], int size, int key) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == key) {
            return i; // Return index if found
        }
    }
    return -1; // Return -1 if not found
}

int main() {
    int arr[] = {10, 25, 30, 45, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    // Prompt user for input
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Call search function
    int result = linearSearch(arr, size, key);

    // Display result
    if(result != -1) {
        printf("Element %d found at position %d\n", key, result + 1);
    } else {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}
