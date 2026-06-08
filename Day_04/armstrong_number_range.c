#include <stdio.h>

int main()
{
    int start, end;
    int i, number, digit, sum;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    // Check each number in the range
    for(i = start; i <= end; i++)
    {
        number = i;
        sum = 0;

        while(number != 0)
        {
            digit = number % 10;
            sum = sum + (digit * digit * digit);
            number = number / 10;
        }

        if(sum == i)
        {
            printf("%d ", i);
        }
    }

    return 0;
}