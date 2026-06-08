#include <stdio.h>

int main()
{
    int number, originalNumber;
    int digit, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;

    // Reverse the number
    while(number != 0)
    {
        digit = number % 10;
        reverse = reverse * 10 + digit;
        number = number / 10;
    }

    // Check palindrome
    if(originalNumber == reverse)
    {
        printf("%d is a Palindrome Number.\n", originalNumber);
    }
    else
    {
        printf("%d is Not a Palindrome Number.\n", originalNumber);
    }

    return 0;
}