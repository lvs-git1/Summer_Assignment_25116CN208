#include <stdio.h>

int main()
{
    int number, originalNumber;
    int digit, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;

    // Calculate sum of cubes of digits
    while(number != 0)
    {
        digit = number % 10;
        sum = sum + (digit * digit * digit);
        number = number / 10;
    }

    // Check Armstrong number
    if(sum == originalNumber)
    {
        printf("%d is an Armstrong Number.\n", originalNumber);
    }
    else{
        printf("%d is Not an Armstrong Number.\n", originalNumber);
    }

    return 0;
}