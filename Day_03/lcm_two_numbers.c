#include <stdio.h>

int main()
{
    int num1, num2, max;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Find the greater number
    if(num1 > num2)
    {
        max = num1;
    }
    else
    {
        max = num2;
    }

    // Find LCM
    while(1)
    {
        if(max % num1 == 0 && max % num2 == 0)
        {
            printf("LCM of %d and %d = %d\n", num1, num2, max);
            break;
        }

        max++;
    }

    return 0;
}