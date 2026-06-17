#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, j, sum;
    int found = 0;

    // Take size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    // Enter required sum
    printf("Enter the required sum: ");
    scanf("%d", &sum);

    // Find pair
    for(i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == sum)
            {
                printf("Pair found: %d and %d\n", arr[i], arr[j]);
                found = 1;
                break;
            }
        }

        if(found == 1){
            break;
        }
    }

    if(found == 0){
        printf("No pair found.\n");
    }

    return 0;
}