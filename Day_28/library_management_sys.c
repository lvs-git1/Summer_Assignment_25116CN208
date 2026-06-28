#include <stdio.h>

struct Book
{
    int bookID;
    char title[100];
    char author[50];
    int quantity;
};

int main()
{
    struct Book book[100];
    int n, i;

    printf("Enter number of books: ");
    scanf("%d", &n);

    getchar();   // Consume newline

    // Input book details
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Book %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &book[i].bookID);

        getchar();   // Consume newline

        printf("Book Title: ");
        fgets(book[i].title, sizeof(book[i].title), stdin);

        printf("Author Name: ");
        fgets(book[i].author, sizeof(book[i].author), stdin);

        printf("Quantity: ");
        scanf("%d", &book[i].quantity);

        getchar();   // Consume newline
    }

    // Display book details
    printf("\n========== LIBRARY RECORDS ==========\n");

    for(i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);
        printf("Book ID     : %d\n", book[i].bookID);
        printf("Book Title  : %s", book[i].title);
        printf("Author Name : %s", book[i].author);
        printf("Quantity    : %d\n", book[i].quantity);
    }

    return 0;
}