#include <stdio.h>

struct Contact
{
    char name[50];
    char phone[20];
    char email[50];
};

int main()
{
    struct Contact contact[100];
    int n, i;

    printf("Enter number of contacts: ");
    scanf("%d", &n);

    getchar();   // Consume newline

    // Input contact details
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Contact %d\n", i + 1);

        printf("Name: ");
        fgets(contact[i].name, sizeof(contact[i].name), stdin);

        printf("Phone Number: ");
        scanf("%s", contact[i].phone);

        getchar();   // Consume newline

        printf("Email: ");
        fgets(contact[i].email, sizeof(contact[i].email), stdin);
    }

    // Display contact details
    printf("\n========== CONTACT LIST ==========\n");

    for(i = 0; i < n; i++)
    {
        printf("\nContact %d\n", i + 1);
        printf("Name         : %s", contact[i].name);
        printf("Phone Number : %s\n", contact[i].phone);
        printf("Email        : %s", contact[i].email);
    }

    return 0;
}