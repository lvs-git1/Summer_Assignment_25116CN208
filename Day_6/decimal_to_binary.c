#include <stdio.h>

int main()
{
    int number, binary[32];
    int i = 0, j;
    printf("Enter a decimal number: ");
    scanf("%d", &number);

    // Special case for 0
    if(number == 0){
        printf("Binary = 0\n");
        return 0;
    }

    // Convert decimal to binary
    while(number > 0){
        binary[i] = number % 2;
        number = number / 2;
        i++;
    }

    // Print binary number in reverse order
    printf("Binary = ");

    for(j = i - 1; j >= 0; j--){
        printf("%d", binary[j]);
    }

    printf("\n");

    return 0;
}