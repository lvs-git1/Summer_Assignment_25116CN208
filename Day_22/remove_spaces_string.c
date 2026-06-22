#include <stdio.h>

int main()
{
    char str[200];
    int i, j = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove spaces
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != ' ')
        {
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';

    // Display result
    printf("String after removing spaces: %s\n", str);

    return 0;
}