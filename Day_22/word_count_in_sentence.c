#include <stdio.h>

int main()
{
    char str[200];
    int i, words = 1;

    // Input sentence
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Count words
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ' && str[i + 1] != ' ')
        {
            words++;
        }
    }

    // Display result
    printf("Number of words = %d\n", words);

    return 0;
}