#include <stdio.h>

// Function to find the sum of two numbers
int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int num1, num2, result;

    // Take input from the user
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Call the function
    result = sum(num1, num2);

    // Display the result
    printf("Sum = %d\n", result);

    return 0;
}