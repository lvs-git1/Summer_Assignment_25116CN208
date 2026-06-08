#include <stdio.h>

int main()
{
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Print character triangle
    for(i = 1; i <= rows; i++){
        for(j = 0; j < i; j++){
            printf("%c", 'A' + j);
        }

        printf("\n");
    }

    return 0;
}