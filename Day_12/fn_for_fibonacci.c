#include <stdio.h>

// Function to find nth Fibonacci term
int fibonacci(int n)
{
    int first = 0, second = 1, next, i;

    if(n == 1)
    {
        return 0;
    }

    if(n == 2)
    {
        return 1;
    }

    for(i = 3; i <= n; i++)
    {
        next = first + second;
        first = second;
        second = next;
    }

    return second;
}

int main()
{
    int terms, i;

    // Take input from the user
    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    printf("Fibonacci Series:\n");

    for(i = 1; i <= terms; i++)
    {
        printf("%d ", fibonacci(i));
    }

    return 0;
}