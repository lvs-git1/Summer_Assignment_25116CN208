#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee emp[100];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    getchar();   // Consume newline

    // Input employee details
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &emp[i].id);

        getchar();   // Consume newline

        printf("Employee Name: ");
        fgets(emp[i].name, sizeof(emp[i].name), stdin);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);

        getchar();   // Consume newline
    }

    // Display employee details
    printf("\n===== Employee Records =====\n");

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);
        printf("Employee ID: %d\n", emp[i].id);
        printf("Employee Name: %s", emp[i].name);
        printf("Salary: %.2f\n", emp[i].salary);
    }

    return 0;
}