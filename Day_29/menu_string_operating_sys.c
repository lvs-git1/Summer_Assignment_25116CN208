#include <stdio.h>

int main()
{
    char str[100], temp;
    int choice;
    int i, length;

    printf("Enter a string: ");
    scanf("%s", str);

    do
    {
        printf("\n===== STRING OPERATIONS MENU =====\n");
        printf("1. Find String Length\n");
        printf("2. Reverse String\n");
        printf("3. Convert to Uppercase\n");
        printf("4. Display String\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                length = 0;
                while(str[length] != '\0')
                {
                    length++;
                }
                printf("Length = %d\n", length);
                break;

            case 2:
                length = 0;
                while(str[length] != '\0')
                {
                    length++;
                }

                for(i = 0; i < length / 2; i++)
                {
                    temp = str[i];
                    str[i] = str[length - 1 - i];
                    str[length - 1 - i] = temp;
                }

                printf("Reversed String = %s\n", str);
                break;

            case 3:
                for(i = 0; str[i] != '\0'; i++)
                {
                    if(str[i] >= 'a' && str[i] <= 'z')
                    {
                        str[i] = str[i] - 32;
                    }
                }

                printf("Uppercase String = %s\n", str);
                break;

            case 4:
                printf("String = %s\n", str);
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while(choice != 5);

    return 0;
}