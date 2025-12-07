#include <stdio.h>
#include <stdlib.h>

int currentbalance = 10000;

void login() {
    int pin = 1234;
    int userpin;
    int attempts = 3;

    while (attempts > 0) {
        printf("Enter pin: ");
        scanf("%d", &userpin);

        if (userpin == pin) {
            printf("Access granted.\n");
            return;
        }

        attempts--;
        if (attempts > 0) {
            printf("Incorrect pin. You have %d attempts left.\n", attempts);
        }
    }

    printf("Too many incorrect attempts. You are locked out.\n");
    exit(0);
}

void balanceinquiry() {
    printf("Your current balance is %d\n", currentbalance);
}

void deposit() {
    int amount;
    printf("Deposit: ");
    scanf("%d", &amount);
    currentbalance += amount;
    printf("Current balance: %d\n", currentbalance);
}

void withdraw() {
    int amount;
    printf("Withdraw: ");
    scanf("%d", &amount);
    if (amount > currentbalance) {
        printf("Insufficient balance!\n");
    } else {
        currentbalance -= amount;
        printf("Current balance: %d\n", currentbalance);
    }
}

int main() {
    login(); // login first

    int option;

    printf("Welcome. Please pick an option:\n"
           "1. Balance inquiry\n"
           "2. Deposit\n"
           "3. Withdraw\n"
           "4. Exit\n");

    scanf("%d", &option);

    switch (option) {
        case 1:
            balanceinquiry();
            break;
        case 2:
            deposit();
            break;
        case 3:
            withdraw();
            break;
        case 4:
            printf("You are exiting.\n");
            break;
        default:
            printf("Invalid option.\n");
            break;
    }

    return 0;
}
