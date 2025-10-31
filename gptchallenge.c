#include <stdio.h>
#include <time.h>

float depositBody(float bankBalance, float depositAmount){ // Deposit's function, used if the user chooses despositing as an option
return depositAmount + bankBalance;
}
float withdrawalBody(float bankBalance, float withDrawalAmount){ // Withdrawal's function, used if the user chooses Withdrawing as an option
return bankBalance - withDrawalAmount;
}
float interestBody(float bankBalance, float interestRateEarly, float interestRateLate){ // Interest's function, used if the user chooses interest as an option
    interestRateLate = interestRateEarly / 100.0;
    return bankBalance + (bankBalance * interestRateLate);
}

int main(){ //main function
    clock_t start, end;
    double cpu_time_used; //Declare a variable of the amount of time it took to compute this program
    start = clock(); // Start clock


    // Variables are declared here, user's password is a constant (for now?)
    float bankBalance = 400;
    float depositAmount;
    float withDrawalAmount;
    float interestRateEarly;
    float interestRateLate;
    int choosingFactor = 0;

    int const userPass = 4728;
    int userPassAttempt;

    float generaluseResult; //*General use result variable. Instead of creating multiple variables and wasting memory, one single variable is way more efficient

    printf("Welcome to the bank!\n");

    printf("Please choose one of the following options: (1, 2, 3, 4, 5)\n"); // The program lets the user choose
    printf("\n1. Deposit");
    printf("\n2. Withdraw");
    printf("\n3. Check Balance");
    printf("\n4. Add interest");
    printf("\n5. Exit\n");

    scanf("%d", &choosingFactor); // Will scan for the user's choice

    if(choosingFactor == 5){
    // Do nothing, allow case 5 to execute and break.
    }else{ // Else? Do the following: 

    

    printf("Before we proceed, please enter the password of the account: ");
    scanf("%d", &userPassAttempt); // Will ask the user for the password.

    if(userPassAttempt != userPass){
        printf("\nERROR: Wrong password. Exiting...");
        choosingFactor = 5; // If it doesn't match the variable userPass, quit.
    }else{
        printf("\nCorrect! Moving on...\n"); //Else, move on with the rest of the code
    }
    }

    switch(choosingFactor){ // Switch statement
        case 1: // First case, the first choice
        printf("Great! How much do you want to deposit into your wallet?\n");
        scanf("%f", &depositAmount); // Takes input from user on the amount to deposit
        generaluseResult = depositBody(bankBalance, depositAmount);
        printf("Your balance is %.2f now, you have deposited %.1f.", generaluseResult, depositAmount);
        break;

        case 2: // Second case, the Second choice
        if(bankBalance == 0){
            printf("Please deposit money into your account before withdrawing!");
            break;
        }else{
        printf("Okay! How much do you want to withdraw?");
        scanf("%f", &withDrawalAmount);
        if(withDrawalAmount > bankBalance){
            printf("Sorry, but the amount of money you're trying to withdraw is not present in your account.");
            break;
        }else{
            generaluseResult = withdrawalBody(bankBalance, withDrawalAmount);
            printf("Only %.2f dollars remain in your account, you have withdrew %.1f dollars.", generaluseResult, withDrawalAmount);
            break;
        }}

        case 3: // Third case, third choice
        printf("Your balance is %.2f dollars.", bankBalance);
        break;

        case 4: // fourth case, fourth choice
        printf("Interesting (Ha! Get it?)! How much is the interest rate? (in percentage): ");
        scanf("%f", &interestRateEarly);
        if(interestRateEarly < 0){
            printf("Interest rate cannot be negative!\n");
        }
        else if(interestRateEarly == 0){
            printf("There is no interest!\n");
        }else{
            generaluseResult = interestBody(bankBalance, interestRateEarly, interestRateLate);
            printf("Based on the interest rate of %.1f%%, %.2f dollars will grow to %.2f dollars after one year\n", 
                   interestRateEarly, bankBalance, generaluseResult);
        }
        break;

        case 5: //fifth case, fifth choice, which is quitting
        printf("Quitting...");
        break;

        default: 
        printf("Invalid choice!");
        return 0;
        break;
    }
    
    end = clock(); // End the clock
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC; // Set the variable's value to the amount of time it took to compute
    printf("\nProgram execution time: %f seconds\n", cpu_time_used); // Then print it
}