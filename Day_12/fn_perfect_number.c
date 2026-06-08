#include <stdio.h>

// Function to check perfect number
int isPerfect(int n)
{
    int i, sum = 0;

    for(i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            sum = sum + i;
        }
    }

    if(sum == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int number;

    // Take input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Call the function
    if(isPerfect(number))
    {
        printf("%d is a Perfect Number.\n", number);
    }
    else
    {
        printf("%d is Not a Perfect Number.\n", number);
    }

    return 0;
}