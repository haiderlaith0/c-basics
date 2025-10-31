#include <stdio.h>

float depositBody(float bankBalance, float depositAmount){
return depositAmount + bankBalance;
}
float withdrawalBody(float bankBalance, float withDrawalAmount){
return bankBalance - withDrawalAmount;
}
float interestBody(float bankBalance, float interestRateEarly, float interestRateLate){
    interestRateLate = interestRateEarly / 100.0;
    return bankBalance + (bankBalance * interestRateLate);
}

int main(){
    float bankBalance = 400;
    float depositAmount;
    float withDrawalAmount;
    float interestRateEarly;
    float interestRateLate;
    int choosingFactor = 0;

    int userPass = 4728;
    int userPassAttempt;

    float generaluseResult;


    printf("Welcome to the bank!\n");

    


    printf("Please choose one of the following options: (1, 2, 3, 4, 5)\n");
    printf("\n1. Deposit");
    printf("\n2. Withdraw");
    printf("\n3. Check Balance");
    printf("\n4. Add interest");
    printf("\n5. Exit\n");

    scanf("%d", &choosingFactor);

    if(choosingFactor == 5){
    
    }else{

    

    printf("Before we proceed, please enter the password of the account: ");
    scanf("%d", &userPassAttempt);

    if(userPassAttempt != userPass){
        printf("\nERROR: Wrong password. Exiting...");
        choosingFactor = 5;
    }else{
        printf("\nCorrect! Moving on...\n");
    }
    }

    switch(choosingFactor){
        case 1:
        printf("Great! How much do you want to deposit into your wallet?\n");
        scanf("%f", &depositAmount);
        generaluseResult = depositBody(bankBalance, depositAmount);
        printf("Your balance is %.2f now, you have deposited %.1f.", generaluseResult, depositAmount);
        break;

        case 2:
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

        case 3:
        printf("Your balance is %.2f dollars.", bankBalance);
        break;

        case 4:
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

        case 5:
        printf("Quitting...");
        break;
    }
}