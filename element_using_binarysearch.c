#include <stdio.h>

int main()
{
    int arr[6] = {5, 12, 18, 25, 32, 40};
    int low = 0, high = 5, mid, key;

    printf("Enter element to search: ");
    scanf("%d", &key);

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(arr[mid] == key)
        {
            printf("Element %d found at position %d\n", key, mid+1);
            return 0;
        }
        else if(key < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    printf("Element %d not found\n", key);
    return 0;
}
