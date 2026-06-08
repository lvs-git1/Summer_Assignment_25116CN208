#include <stdio.h>

// Function to check palindrome
int isPalindrome(int n)
{
    int original, reverse = 0, digit;

    original = n;

    while(n != 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    if(original == reverse)
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
    if(isPalindrome(number))
    {
        printf("%d is a Palindrome Number.\n", number);
    }
    else
    {
        printf("%d is Not a Palindrome Number.\n", number);
    }

    return 0;
}