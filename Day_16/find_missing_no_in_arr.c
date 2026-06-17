#include <stdio.h>

int main()
{
    int arr[100];
    int n, i;
    int expectedSum = 0, actualSum = 0;
    int missingNumber;

    // Enter value of N
    printf("Enter the value of N: ");
    scanf("%d", &n);

    // Input n-1 elements
    printf("Enter %d numbers:\n", n - 1);
    for(i = 0; i < n - 1; i++){
        scanf("%d", &arr[i]);
    }

    // Calculate expected sum of numbers from 1 to N
    expectedSum = n * (n + 1) / 2;

    // Calculate actual sum of array elements
    for(i = 0; i < n - 1; i++){
        actualSum = actualSum + arr[i];
    }

    // Find missing number
    missingNumber = expectedSum - actualSum;

    printf("Missing Number = %d\n", missingNumber);

    return 0;
}