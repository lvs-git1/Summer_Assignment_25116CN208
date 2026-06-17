#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, j = 0;
    int result[100];

    // Take size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    // Store non-zero elements first
    for(i = 0; i < n; i++){
        if(arr[i] != 0){
            result[j] = arr[i];
            j++;
        }
    }

    // Fill remaining positions with zeroes
    while(j < n){
        result[j] = 0;
        j++;
    }

    // Display result
    printf("Array after moving zeroes to end:\n");
    for(i = 0; i < n; i++){
        printf("%d ", result[i]);
    }

    printf("\n");

    return 0;
}