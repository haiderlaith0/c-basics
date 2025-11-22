#include <stdio.h>

int main() {

    printf("--- WELCOME TO OUR GENERAL SHOP! ---\n");
    printf("We have the following items in stock:\n\n");

    const char items[5][10] = {"Apple", "Banana", "Milk", "Bread", "Eggs"};
    const float prices[5] = {0.5, 0.2, 1.5, 2.0, 0.1};

    int stock[5] = {10, 15, 5, 8, 30};   // ← moved outside the loop
    float totalBill = 0;                 // tracks entire purchase session

    while (1) {

        int generalSize = sizeof(items) / sizeof(items[0]);

        // Print inventory
        for (int i = 0; i < generalSize; i++) {
            printf("%d. %s - %.2f$ (Stock: %d)\n",
                   i + 1, items[i], prices[i], stock[i]);
        }

        int choice;
        printf("\nWhich item do you want to buy? (1-5)\n");
        scanf("%d", &choice);

        if (choice < 1 || choice > 5) {
            printf("Invalid choice! Try again.\n");
            continue;
        }

        choice--; // convert to 0–4 index

        int quantity;
        printf("How many do you want?\n");
        scanf("%d", &quantity);

        if (quantity <= stock[choice]) {
            float cost = prices[choice] * quantity;
            stock[choice] -= quantity;   // FIXED
            totalBill += cost;

            printf("You bought %d %s(s)!\n", quantity, items[choice]);
            printf("Cost: %.2f$\n\n", cost);

        } else {
            printf("Not enough stock for %s!\n\n", items[choice]);
        }

        int exitFactor;
        printf("Continue shopping? (1 = no, 0 = yes)\n");
        scanf("%d", &exitFactor);

        if (exitFactor == 1) {
            printf("\nYour total bill is: %.2f$\n", totalBill);
            printf("Thank you for shopping! Goodbye!\n");
            break;
        }
    }

    return 0;
}
