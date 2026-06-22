#include <stdio.h>

int main()
{
    char str[100];
    int length = 0;

    // Input string
    printf("Enter a string: ");
    scanf("%s", str);

    // Calculate length
    while(str[length] != '\0')
    {
        length++;
    }

    // Display length
    printf("Length of string = %d\n", length);

    return 0;
}