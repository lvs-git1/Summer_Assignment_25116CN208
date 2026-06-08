#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, key;
    int found = 0;

    // Take size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Enter element to search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Linear Search
    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            printf("Element found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    // If element not found
    if(found == 0)
    {
        printf("Element not found.\n");
    }

    return 0;
}