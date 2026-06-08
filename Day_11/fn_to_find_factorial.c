#include <stdio.h>

// Function to find factorial
long long factorial(int n)
{
    int i;
    long long fact = 1;

    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int number;

    // Take input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Display the result
    printf("Factorial of %d = %lld\n", number, factorial(number));

    return 0;
}