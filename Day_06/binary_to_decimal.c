#include <stdio.h>

int main(){
    long long binary;
    int decimal = 0, base = 1, remainder;
    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    // Convert binary to decimal
    while(binary > 0){
        remainder = binary % 10;
        decimal = decimal + remainder * base;
        binary = binary / 10;
        base = base * 2;
    }

    // Display the result
    printf("Decimal = %d\n", decimal);

    return 0;
}