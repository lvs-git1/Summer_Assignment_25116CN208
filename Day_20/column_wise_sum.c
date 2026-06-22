#include <stdio.h>

int main()
{
    int matrix[10][10];
    int rows, cols, i, j;
    int sum;

    // Input matrix size
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Input matrix elements
    printf("Enter matrix elements:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Find column-wise sum
    for(j = 0; j < cols; j++)
    {
        sum = 0;

        for(i = 0; i < rows; i++)
        {
            sum += matrix[i][j];
        }

        printf("Sum of Column %d = %d\n", j + 1, sum);
    }

    return 0;
}