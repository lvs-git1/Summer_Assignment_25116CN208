#include <stdio.h>

int main()
{
    int matrix[10][10];
    int n, i, j;
    int symmetric = 1;

    // Input order of square matrix
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

    // Check symmetry
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(matrix[i][j] != matrix[j][i])
            {
                symmetric = 0;
                break;
            }
        }

        if(symmetric == 0)
        {
            break;
        }
    }

    // Display result
    if(symmetric)
    {
        printf("Matrix is Symmetric.\n");
    }
    else
    {
        printf("Matrix is Not Symmetric.\n");
    }

    return 0;
}