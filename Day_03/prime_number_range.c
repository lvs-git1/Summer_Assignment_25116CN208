#include <stdio.h>

int main()
{
    int start, end, i, j, isPrime;

    // Take range input from the user
    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    // Check each number in the range
    for(i = start; i <= end; i++)
    {
        if(i <= 1)
        {
            continue;
        }

        isPrime = 1;

        for(j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if(isPrime)
        {
            printf("%d ", i);
        }
    }

    return 0;
}