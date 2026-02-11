#include <stdio.h>

int main() {
    int ch;
    int balance = 1000;
    int amount;

    printf("===== ATM MENU =====\n");
    printf("1. Balance Inquiry\n");
    printf("2. Cash Withdrawal\n");
    printf("3. Deposit\n");
    printf("4. Exit\n");


    printf("Enter your choice: ");
    scanf("%d", &ch);

    switch (ch) {
        case 1:
            printf("Your balance is: %d\n", balance);
            break;

        case 2:
            printf("Enter amount to withdraw: ");
            scanf("%d", &amount);

            if (amount <= balance) {
                balance = balance - amount;
                printf("Please collect your cash\n");
                printf("Remaining balance: %d\n", balance);
            } else {
                printf("Insufficient balance\n");
            }
            break;

        case 3:
            printf("Enter amount to deposit: ");
            scanf("%d", &amount);

            balance = balance + amount;
            printf("Amount deposited successfully\n");
            printf("Updated balance: %d\n", balance);
            break;

        case 4:
            printf("Thank you for using ATM.Exit!\n");
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
