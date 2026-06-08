#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, key;
    int frequency = 0;

    // Take size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Enter element to find frequency
    printf("Enter the element: ");
    scanf("%d", &key);

    // Count frequency
    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            frequency++;
        }
    }

    // Display result
    printf("Frequency of %d = %d\n", key, frequency);

    return 0;
}