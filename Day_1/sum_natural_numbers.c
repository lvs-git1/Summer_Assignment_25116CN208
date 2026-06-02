#include <stdio.h>

int main()
{
    int n, i;
    int sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    // Calculate the sum of first N natural numbers
    for(i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}