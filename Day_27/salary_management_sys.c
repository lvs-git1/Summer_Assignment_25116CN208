#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float basicSalary;
    float hra;
    float da;
    float netSalary;
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

        printf("Basic Salary: ");
        scanf("%f", &emp[i].basicSalary);

        printf("HRA: ");
        scanf("%f", &emp[i].hra);

        printf("DA: ");
        scanf("%f", &emp[i].da);

        getchar();   // Consume newline

        // Calculate net salary
        emp[i].netSalary = emp[i].basicSalary + emp[i].hra + emp[i].da;
    }

    // Display salary details
    printf("\n===== Salary Records =====\n");

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);
        printf("Employee ID: %d\n", emp[i].id);
        printf("Employee Name: %s", emp[i].name);
        printf("Basic Salary: %.2f\n", emp[i].basicSalary);
        printf("HRA: %.2f\n", emp[i].hra);
        printf("DA: %.2f\n", emp[i].da);
        printf("Net Salary: %.2f\n", emp[i].netSalary);
    }

    return 0;
}