#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int i, j;
    int count1[256] = {0};
    int count2[256] = {0};
    int isAnagram = 1;

    // Input strings
    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Count frequency of characters
    for(i = 0; str1[i] != '\0'; i++)
    {
        count1[(int)str1[i]]++;
    }

    for(i = 0; str2[i] != '\0'; i++)
    {
        count2[(int)str2[i]]++;
    }

    // Compare frequencies
    for(i = 0; i < 256; i++)
    {
        if(count1[i] != count2[i])
        {
            isAnagram = 0;
            break;
        }
    }

    // Display result
    if(isAnagram)
    {
        printf("Strings are anagrams.\n");
    }
    else
    {
        printf("Strings are not anagrams.\n");
    }

    return 0;
}