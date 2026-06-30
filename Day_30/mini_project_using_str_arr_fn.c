#include <stdio.h>

#define MAX 100

int roll[MAX];
char name[MAX][50];
float marks[MAX];
int n;

// Function to input records
void inputRecords()
{
    int i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    getchar();

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &roll[i]);

        getchar();

        printf("Name: ");
        fgets(name[i], sizeof(name[i]), stdin);

        printf("Marks: ");
        scanf("%f", &marks[i]);

        getchar();
    }
}

// Function to display records
void displayRecords()
{
    int i;

    printf("\n========== STUDENT RECORDS ==========\n");

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number : %d\n", roll[i]);
        printf("Name        : %s", name[i]);
        printf("Marks       : %.2f\n", marks[i]);
    }
}

// Function to search student
void searchStudent()
{
    int i, searchRoll;
    int found = 0;

    printf("\nEnter Roll Number to search: ");
    scanf("%d", &searchRoll);

    for(i = 0; i < n; i++)
    {
        if(roll[i] == searchRoll)
        {
            printf("\nStudent Found\n");
            printf("Roll Number : %d\n", roll[i]);
            printf("Name        : %s", name[i]);
            printf("Marks       : %.2f\n", marks[i]);

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Student not found.\n");
    }
}

int main()
{
    inputRecords();
    displayRecords();
    searchStudent();

    return 0;
}