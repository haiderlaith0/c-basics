#include <stdio.h>

float calculatorBody(float nums1, float nums2, char op){
    switch(op){     
        case '+': return nums1 + nums2;
        case '-': return nums1 - nums2;
        case '*': return nums1 * nums2;
        case '/': if(nums2 == 0){printf("ERROR: Division by zero!\n"); return 0;} else{return nums1 / nums2;}

        default: printf("ERROR: Invalid operator!\n");
        return 0;
    }  
}

int main(){
        float nums1 = 0, nums2 = 0, result = 0; char op = '\0';
        

        while(1){
            printf("\nTo exit the program, please type 1, 0 or q when asked to choose an operator...\n");

            printf("Please choose your first number: \n");
            scanf("%f", &nums1);
            printf("Please choose your second number: \n");
            scanf("%f", &nums2);
            printf("Please choose your operator: \n");
            scanf(" %c", &op);
            
            if(op == '1' || op == '0' || op == 'q'){
                printf("Got it, Quitting...\n");
                break;
            }

            if(op == '+' || op == '-' || op == '*' || op == '/'){
            result = calculatorBody(nums1, nums2, op);
            printf("The Result is: %.2f\n", result);}else{printf("\nTry again...\n");}
        }
        return 0;
    }