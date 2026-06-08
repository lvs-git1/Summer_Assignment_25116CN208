#include <stdio.h>

int main()
{
    int rows, i, j;

    // Take input from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Print number triangle
    for(i = 1; i <= rows; i++){
        for(j = 1; j <= i; j++){
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}