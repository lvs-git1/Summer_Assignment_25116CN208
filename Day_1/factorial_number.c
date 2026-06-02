#include <stdio.h>

int main()
{
    int n, i;
    long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculate factorial
    for(i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
5

    printf("Factorial of %d = %lld\n", n, factorial);

    return 0;
}