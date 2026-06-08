#include <stdio.h>

int main()
{
    int number, count = 0;

    // Take input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Special case for 0
    if(number == 0)
    {
        count = 1;
    }
    else
    {
        // Count digits
        while(number != 0)
        {
            number = number / 10;
            count++;
        }
    }

    // Display the result
    printf("Number of digits = %d\n", count);

    return 0;
}