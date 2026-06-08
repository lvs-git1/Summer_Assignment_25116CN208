#include <stdio.h>

// Recursive function to find sum of digits
int sumOfDigits(int n){
    if(n == 0){
        return 0;
    }

    return (n % 10) + sumOfDigits(n / 10);
}

int main(){
    int number;

    // Take input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Display the result
    printf("Sum of digits = %d\n", sumOfDigits(number));

    return 0;
}