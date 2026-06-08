#include <stdio.h>

// Function to check prime number
int isPrime(int n)
{
    int i;

    if(n <= 1)
    {
        return 0;
    }

    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int number;

    // Take input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Call the function
    if(isPrime(number))
    {
        printf("%d is a Prime Number.\n", number);
    }
    else
    {
        printf("%d is Not a Prime Number.\n", number);
    }

    return 0;
}