#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, lastElement;

    // Take size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    // Store last element
    lastElement = arr[n - 1];

    // Shift elements to the right
    for(i = n - 1; i > 0; i--){
        arr[i] = arr[i - 1];
    }

    // Place last element at the beginning
    arr[0] = lastElement;

    // Display rotated array
    printf("Array after right rotation:\n");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}