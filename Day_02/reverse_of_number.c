#include <stdio.h>

int main()
{
    int number, digit, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Reverse the number
    while(number != 0)
    {
        digit = number % 10;                 // Extract last digit
        reverse = reverse * 10 + digit;      // Build reversed number
        number = number / 10;                // Remove last digit
    }

    printf("Reversed number = %d\n", reverse);

    return 0;
}
