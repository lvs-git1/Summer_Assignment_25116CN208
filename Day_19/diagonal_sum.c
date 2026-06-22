#include <stdio.h>

int main()
{
    int matrix[10][10];
    int n, i, j;
    int sum = 0;

    // Input size of square matrix
    printf("Enter the order of matrix: ");
    scanf("%d", &n);

    // Input matrix elements
    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate diagonal sum
    for(i = 0; i < n; i++)
    {
        sum = sum + matrix[i][i];
    }

    // Display result
    printf("Sum of principal diagonal elements = %d\n", sum);

    return 0;
}