#include <stdio.h>

int main()
{
    char str[200];
    char longest[100];
    char word[100];
    int i, j = 0;
    int maxLength = 0, length = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; ; i++)
    {
        if(str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
        {
            word[j++] = str[i];
            length++;
        }
        else
        {
            word[j] = '\0';

            if(length > maxLength)
            {
                maxLength = length;

                for(j = 0; word[j] != '\0'; j++)
                {
                    longest[j] = word[j];
                }

                longest[j] = '\0';
            }

            j = 0;
            length = 0;

            if(str[i] == '\0' || str[i] == '\n')
            {
                break;
            }
        }
    }

    printf("Longest word = %s\n", longest);
    printf("Length = %d\n", maxLength);

    return 0;
}