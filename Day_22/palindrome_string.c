#include <stdio.h>

int main()
{
    char str[100];
    int length = 0, i;
    int palindrome = 1;

    // Input string
    printf("Enter a string: ");
    scanf("%s", str);

    // Find length
    while(str[length] != '\0')
    {
        length++;
    }

    // Check palindrome
    for(i = 0; i < length / 2; i++)
    {
        if(str[i] != str[length - 1 - i])
        {
            palindrome = 0;
            break;
        }
    }

    // Display result
    if(palindrome)
    {
        printf("String is a palindrome.\n");
    }
    else
    {
        printf("String is not a palindrome.\n");
    }

    return 0;
}