#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, j, k;

    // Take size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    // Remove duplicates
    for(i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            if(arr[i] == arr[j]){
                for(k = j; k < n - 1; k++){
                    arr[k] = arr[k + 1];
                }

                n--;
                j--;
            }
        }
    }

    // Display array after removing duplicates
    printf("Array after removing duplicates:\n");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}