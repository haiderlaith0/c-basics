#include <stdio.h>

int main(){
    float insertedMoney;
    int itemSelection;
    float totalMoneySpent;
    float moneyWasted;

    int quitFactor;

    float chips = 1.50f; float candy = 1.00f; float soda = 2.00f;

    printf("=== MYSTERY VENDING MACHINE ===\n");
    printf("1. Chips - %.2f\n", chips);
    printf("2. Candy - %.2f\n", candy);
    printf("3. Soda -  %.2f\n", soda);

    while(1){
    printf("\nInsert Money: ");
    scanf("%f", &insertedMoney);

    printf("Select item (1-3): ");
    scanf("%d", &itemSelection);

    switch(itemSelection){
        case 1:
        totalMoneySpent = insertedMoney - chips;
        moneyWasted =+1;
        printf("You bought Chips! Change: %.2f\n", totalMoneySpent);
        break;
        case 2:
        totalMoneySpent = insertedMoney - candy;
        moneyWasted ++;
        printf("You bought Candy! Change: %.2f\n", totalMoneySpent);
        break;
        case 3:
        totalMoneySpent = insertedMoney - soda;
        moneyWasted =+2;
        printf("You bought Soda! Change: %.2f\n", totalMoneySpent);
        break;

        default:
        printf("INVALID CHOICE!\n");
        break;
    }
    printf("Continue? (1=yes, 0=no): ");
    scanf("%d", &quitFactor);

    if(quitFactor == 0){
        printf("You have spent $%.2f. Quitting...", moneyWasted);
        break;
    }
    }



    return 0;
}