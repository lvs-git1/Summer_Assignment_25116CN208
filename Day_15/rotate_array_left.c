#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, firstElement;

    // Take size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    // Store first element
    firstElement = arr[0];

    // Shift elements to the left
    for(i = 0; i < n - 1; i++){
        arr[i] = arr[i + 1];
    }

    // Place first element at the end
    arr[n - 1] = firstElement;

    // Display rotated array
    printf("Array after left rotation:\n");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}