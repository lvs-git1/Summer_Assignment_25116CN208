#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[100];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    getchar();   // Consume the newline left by scanf

    // Input student details
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        getchar();   // Consume newline

        printf("Name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);

        printf("Marks: ");
        scanf("%f", &s[i].marks);

        getchar();   // Consume newline
    }

    // Display student details
    printf("\n===== Student Records =====\n");

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number: %d\n", s[i].roll);
        printf("Name: %s", s[i].name);
        printf("Marks: %.2f\n", s[i].marks);
    }

    return 0;
}