#include <stdio.h>
#include <string.h>

struct Book
{
    int bookID;
    char title[100];
    char author[50];
};

int main()
{
    struct Book book[100];
    int n, i, searchID;
    int found = 0;

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
    }

    // Display all books
    printf("\n========== LIBRARY BOOKS ==========\n");

    for(i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);
        printf("Book ID     : %d\n", book[i].bookID);
        printf("Book Title  : %s", book[i].title);
        printf("Author Name : %s", book[i].author);
    }

    // Search by Book ID
    printf("\nEnter Book ID to search: ");
    scanf("%d", &searchID);

    for(i = 0; i < n; i++)
    {
        if(book[i].bookID == searchID)
        {
            printf("\nBook Found\n");
            printf("Book ID     : %d\n", book[i].bookID);
            printf("Book Title  : %s", book[i].title);
            printf("Author Name : %s", book[i].author);

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Book not found.\n");
    }

    return 0;
}