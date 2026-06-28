#include <stdio.h>

struct BankAccount
{
    int accountNumber;
    char accountHolder[50];
    float balance;
};

int main()
{
    struct BankAccount account;
    float amount;

    printf("Enter Account Number: ");
    scanf("%d", &account.accountNumber);

    getchar();   // Consume newline

    printf("Enter Account Holder Name: ");
    fgets(account.accountHolder, sizeof(account.accountHolder), stdin);

    printf("Enter Initial Balance: ");
    scanf("%f", &account.balance);

    // Deposit
    printf("\nEnter amount to deposit: ");
    scanf("%f", &amount);

    account.balance += amount;

    // Withdraw
    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);

    if(amount <= account.balance)
    {
        account.balance -= amount;
        printf("Withdrawal successful.\n");
    }
    else
    {
        printf("Insufficient balance.\n");
    }

    // Display account details
    printf("\n========== BANK ACCOUNT DETAILS ==========\n");
    printf("Account Number      : %d\n", account.accountNumber);
    printf("Account Holder Name : %s", account.accountHolder);
    printf("Available Balance   : %.2f\n", account.balance);

    return 0;
}