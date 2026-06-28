#include <stdio.h>

int main()
{
    int choice;
    float balance = 1000.0, amount;

    do
    {
        printf("\n===== ATM MENU =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Current Balance = %.2f\n", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);

                balance += amount;
                printf("Deposit successful.\n");
                printf("Updated Balance = %.2f\n", balance);
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if(amount <= balance)
                {
                    balance -= amount;
                    printf("Withdrawal successful.\n");
                    printf("Remaining Balance = %.2f\n", balance);
                }
                else
                {
                    printf("Insufficient balance.\n");
                }
                break;

            case 4:
                printf("Thank you for using the ATM.\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while(choice != 4);

    return 0;
}