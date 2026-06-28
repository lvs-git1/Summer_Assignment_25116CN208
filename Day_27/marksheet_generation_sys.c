#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    int marks[5];
    int total;
    float percentage;
    char grade;
};

int main()
{
    struct Student s;
    int i;
    int pass = 1;

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    getchar();   // Consume newline

    printf("Enter Student Name: ");
    fgets(s.name, sizeof(s.name), stdin);

    s.total = 0;

    printf("Enter marks of 5 subjects:\n");
    for(i = 0; i < 5; i++)
    {
        printf("Subject %d: ", i + 1);
        scanf("%d", &s.marks[i]);

        if(s.marks[i] < 40)
        {
            pass = 0;
        }

        s.total += s.marks[i];
    }

    s.percentage = s.total / 5.0;

    // Assign Grade
    if(s.percentage >= 90)
        s.grade = 'A';
    else if(s.percentage >= 75)
        s.grade = 'B';
    else if(s.percentage >= 60)
        s.grade = 'C';
    else if(s.percentage >= 40)
        s.grade = 'D';
    else
        s.grade = 'F';

    printf("\n========== MARKSHEET ==========\n");
    printf("Roll Number : %d\n", s.roll);
    printf("Student Name: %s", s.name);

    printf("\nMarks:\n");
    for(i = 0; i < 5; i++)
    {
        printf("Subject %d: %d\n", i + 1, s.marks[i]);
    }

    printf("\nTotal      : %d\n", s.total);
    printf("Percentage : %.2f%%\n", s.percentage);
    printf("Grade      : %c\n", s.grade);

    if(pass)
        printf("Result     : PASS\n");
    else
        printf("Result     : FAIL\n");

    return 0;
}