#include <stdio.h>

int main()
{
    int number, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate sum of digits
    while(number != 0)
    {
        digit = number % 10;   // Extract last digit
        sum = sum + digit;     // Add digit to sum
        number = number / 10;  // Remove last digit
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}