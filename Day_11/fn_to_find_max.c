#include <stdio.h>

// Function to find the maximum number
int maximum(int a, int b)
{
    if(a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int num1, num2, max;

    // Take input from the user
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Call the function
    max = maximum(num1, num2);

    // Display the result
    printf("Maximum number = %d\n", max);

    return 0;
}