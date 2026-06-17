#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, key;
    int low, high, mid;
    int found = 0;

    // Take size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input sorted array elements
    printf("Enter %d elements in sorted order:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Element to search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    // Binary Search
    while(low <= high)
    {
        mid = (low + high) / 2;

        if(arr[mid] == key)
        {
            found = 1;
            break;
        }
        else if(arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if(found)
    {
        printf("Element found at position %d\n", mid + 1);
    }
    else
    {
        printf("Element not found.\n");
    }

    return 0;
}