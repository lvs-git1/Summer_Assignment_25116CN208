#include <stdio.h>

int main()
{
    char str[100];
    int i;
    int vowels = 0, consonants = 0;

    // Input string
    printf("Enter a string: ");
    scanf("%s", str);

    // Count vowels and consonants
    for(i = 0; str[i] != '\0'; i++)
    {
        if((str[i] >= 'A' && str[i] <= 'Z') ||
           (str[i] >= 'a' && str[i] <= 'z'))
        {
            if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
               str[i] == 'O' || str[i] == 'U' ||
               str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
               str[i] == 'o' || str[i] == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    // Display result
    printf("Number of vowels = %d\n", vowels);
    printf("Number of consonants = %d\n", consonants);

    return 0;
}