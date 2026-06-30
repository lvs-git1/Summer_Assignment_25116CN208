#include <stdio.h>

struct Product
{
    int productID;
    char productName[50];
    int quantity;
    float price;
    float totalValue;
};

int main()
{
    struct Product product[100];
    int n, i;

    printf("Enter number of products: ");
    scanf("%d", &n);

    getchar();   // Consume newline

    // Input product details
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Product %d\n", i + 1);

        printf("Product ID: ");
        scanf("%d", &product[i].productID);

        getchar();   // Consume newline

        printf("Product Name: ");
        fgets(product[i].productName, sizeof(product[i].productName), stdin);

        printf("Quantity: ");
        scanf("%d", &product[i].quantity);

        printf("Price per Unit: ");
        scanf("%f", &product[i].price);

        getchar();   // Consume newline

        // Calculate total value
        product[i].totalValue = product[i].quantity * product[i].price;
    }

    // Display inventory details
    printf("\n========== INVENTORY RECORDS ==========\n");

    for(i = 0; i < n; i++)
    {
        printf("\nProduct %d\n", i + 1);
        printf("Product ID     : %d\n", product[i].productID);
        printf("Product Name   : %s", product[i].productName);
        printf("Quantity       : %d\n", product[i].quantity);
        printf("Price per Unit : %.2f\n", product[i].price);
        printf("Total Value    : %.2f\n", product[i].totalValue);
    }

    return 0;
}