#include <stdio.h>

int main()
{
    int number, digit;
    int product = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Special case for 0
    if(number == 0)
    {
        product = 0;
    }
    else
    {
        // Calculate product of digits
        while(number != 0)
        {
            digit = number % 10;      // Extract last digit
            product = product * digit;
            number = number / 10;     // Remove last digit
        }
    }

    printf("Product of digits = %d\n", product);

    return 0;
}