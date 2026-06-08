#include <stdio.h>

// Recursive function to find factorial
long long factorial(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
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