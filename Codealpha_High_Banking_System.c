#include <stdio.h>

struct account {
    int accNo;
    float balance;
};

int main() {
    struct account a = {101, 5000};
    int choice;
    float amount;

    do {
        printf("\n1.Deposit");
        printf("\n2.Withdraw");
        printf("\n3.Balance");
        printf("\n4.Exit");
        printf("\nChoice: ");
        scanf("%d",&choice);

        switch(choice) {
            case 1:
                printf("Enter amount: ");
                scanf("%f",&amount);
                a.balance += amount;
                break;

            case 2:
                printf("Enter amount: ");
                scanf("%f",&amount);
                if(amount <= a.balance)
                    a.balance -= amount;
                else
                    printf("Insufficient balance");
                break;

            case 3:
                printf("Balance = %.2f", a.balance);
                break;
        }

    } while(choice != 4);

    return 0;
}