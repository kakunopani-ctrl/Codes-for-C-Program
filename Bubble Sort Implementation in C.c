#include <stdio.h>
int main() {
    int arr[5] = {34, 12, 5, 67, 23};
    int i,j, temp;

    for(i = 0; i < 5-1; i++) {
        for(j = 0; j < 5-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Sorted array: \n");
    for(i = 0; i < 5; i++)
    printf("%d ", arr[i]);
    return 0;
}
