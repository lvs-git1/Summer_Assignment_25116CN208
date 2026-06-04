#include <stdio.h>

int main()
{
    int number, originalNumber;
    int digit, i;
    int factorial, sum = 0;

    // Take input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;

    // Calculate sum of factorials of digits
    while(number != 0)
    {
        digit = number % 10;

        factorial = 1;
        for(i = 1; i <= digit; i++)
        {
            factorial = factorial * i;
        }

        sum = sum + factorial;
        number = number / 10;
    }

    // Check Strong Number
    if(sum == originalNumber)
    {
        printf("%d is a Strong Number.\n", originalNumber);
    }
    else
    {
        printf("%d is not a Strong Number.\n", originalNumber);
    }

    return 0;
}