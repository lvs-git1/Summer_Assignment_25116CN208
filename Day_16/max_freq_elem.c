#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, j;
    int maxCount = 0, count;
    int maxElement;

    // Take size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    // Find maximum frequency element
    for(i = 0; i < n; i++){
        count = 0;

        for(j = 0; j < n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }

        if(count > maxCount){
            maxCount = count;
            maxElement = arr[i];
        }
    }

    // Display result
    printf("Element with maximum frequency = %d\n", maxElement);
    printf("Frequency = %d\n", maxCount);

    return 0;
}