#include <stdio.h>

// function to take input using pointers
void input_array(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", arr + i); // same as &arr[i]
    }
}

// function to display array using pointers
void display_array(int *arr, int n) {
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i)); // same as arr[i]
    }
    printf("\n");
}

// function to find sum of array
int sumArray(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(arr + i);
    }
    return sum;
}

// function to count positive numbers
int countPos(int *arr, int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (*(arr + i) > 0)
            count++;
    }
    return count;
}

// function to count negative numbers
int countNeg(int *arr, int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (*(arr + i) < 0)
            count++;
    }
    return count;
}

int main() {
    int arr[100], n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    input_array(arr, n);
    display_array(arr, n);

    int sum = sumArray(arr, n);
    int pos = countPos(arr, n);
    int neg = countNeg(arr, n);

    printf("Sum = %d\n", sum);
    printf("Positive count = %d\n", pos);
    printf("Negative count = %d\n", neg);

    return 0;
}
