#include <stdio.h>

int main()
{
    int number, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    // 0 and 1 are not prime numbers
    if(number <= 1)
    {
        isPrime = 0;
    }
    else
    {
        // Check for factors
        for(i = 2; i < number; i++)
        {
            if(number % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    // Display result
    if(isPrime)
    {
        printf("%d is a Prime Number.\n", number);
    }
    else
    {
        printf("%d is Not a Prime Number.\n", number);
    }

    return 0;
}