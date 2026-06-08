#include <stdio.h>

int reverse = 0;

// Recursive function to reverse a number
int reverseNumber(int n){
    if(n == 0)
    {
        return reverse;
    }

    reverse = reverse * 10 + (n % 10);

    return reverseNumber(n / 10);
}

int main(){
    int number;

    // Take input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Display the reversed number
    printf("Reversed number = %d\n", reverseNumber(number));

    return 0;
}