#include <stdio.h>

int main()
{
    int roll[100];
    char name[100][50];
    float marks[100];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    getchar();   // Consume newline

    // Input student details
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &roll[i]);

        getchar();   // Consume newline

        printf("Name: ");
        fgets(name[i], sizeof(name[i]), stdin);

        printf("Marks: ");
        scanf("%f", &marks[i]);

        getchar();   // Consume newline
    }

    // Display student records
    printf("\n========== STUDENT RECORDS ==========\n");

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number : %d\n", roll[i]);
        printf("Name        : %s", name[i]);
        printf("Marks       : %.2f\n", marks[i]);
    }

    return 0;
}