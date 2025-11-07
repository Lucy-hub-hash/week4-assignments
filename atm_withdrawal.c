#include <stdio.h>

int main() {
    double balance, withdrawal;

    // Ask user for initial account balance
    printf("Enter your account balance: ");
    scanf("%lf", &balance);

    // Allow withdrawals while balance > 0
    while (balance > 0) {
        printf("Enter amount to withdraw: ");
        scanf("%lf", &withdrawal);

        balance -= withdrawal;

        printf("Remaining balance: %.2f\n", balance);

        if (balance <= 0) {
            printf("Account balance is zero or negative. No further withdrawals allowed.\n");
            break;
        }
    }

    return 0;
}
