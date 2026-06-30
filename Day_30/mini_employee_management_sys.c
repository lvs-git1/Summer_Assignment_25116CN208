#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    char department[50];
    float salary;
};

int main()
{
    struct Employee emp[100];
    int n, i, searchID;
    int found = 0;

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

        printf("Department: ");
        fgets(emp[i].department, sizeof(emp[i].department), stdin);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);

        getchar();   // Consume newline
    }

    // Display employee records
    printf("\n========== EMPLOYEE RECORDS ==========\n");

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);
        printf("Employee ID   : %d\n", emp[i].id);
        printf("Employee Name : %s", emp[i].name);
        printf("Department    : %s", emp[i].department);
        printf("Salary        : %.2f\n", emp[i].salary);
    }

    // Search employee by ID
    printf("\nEnter Employee ID to search: ");
    scanf("%d", &searchID);

    for(i = 0; i < n; i++)
    {
        if(emp[i].id == searchID)
        {
            printf("\nEmployee Found\n");
            printf("Employee ID   : %d\n", emp[i].id);
            printf("Employee Name : %s", emp[i].name);
            printf("Department    : %s", emp[i].department);
            printf("Salary        : %.2f\n", emp[i].salary);

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Employee not found.\n");
    }

    return 0;
}