#include <stdio.h>

int main() {
    int balance = 1000;  // Initial account balance
    int withdrawal; // Number of money to withdraw

    do {
        printf("------------------------------\n");
        printf("Your current balance is: $%d\n", balance);
        printf("Enter the amount to withdraw: ");
        scanf("%d", &withdrawal);

        if (withdrawal > balance) {
            printf("Insufficient balance! Try again.\n");
        } else {
            balance = balance - withdrawal;
            printf("Withdrawn cash: $%d\n", withdrawal);
            printf("Your current balance is: $%d\n", balance);
        }
    } while (balance > 0);  // Repeat until no more money left
    
    printf("You ran out of money\n");

    return 0;
}
