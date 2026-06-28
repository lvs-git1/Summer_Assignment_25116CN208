#include <stdio.h>

int main()
{
    int answer;
    int score = 0;

    printf("===== Quiz Application =====\n\n");

    printf("1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if(answer == 2)
        score++;

    printf("\n2. Which language is used for C programming?\n");
    printf("1. Compiler\n2. Interpreter\n3. C\n4. Python\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if(answer == 3)
        score++;

    printf("\n3. Which symbol is used for comments in C?\n");
    printf("1. //\n2. ##\n3. **\n4. &&\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if(answer == 1)
        score++;

    printf("\n4. How many days are there in a week?\n");
    printf("1. 5\n2. 6\n3. 7\n4. 8\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if(answer == 3)
        score++;

    printf("\n5. Which operator is used for addition?\n");
    printf("1. +\n2. -\n3. *\n4. /\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if(answer == 1)
        score++;

    printf("\n===== Result =====\n");
    printf("Your Score = %d/5\n", score);

    return 0;
}