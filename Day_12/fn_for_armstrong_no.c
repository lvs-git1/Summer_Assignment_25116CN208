#include <stdio.h>

// Function to check Armstrong number
int isArmstrong(int n)
{
    int original, digit, sum = 0;

    original = n;

    while(n != 0)
    {
        digit = n % 10;
        sum = sum + (digit * digit * digit);
        n = n / 10;
    }

    if(sum == original)
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
    if(isArmstrong(number))
    {
        printf("%d is an Armstrong Number.\n", number);
    }
    else
    {
        printf("%d is Not an Armstrong Number.\n", number);
    }

    return 0;
}