#include <stdio.h>

int main() {
    float nums1;
    float nums2;
    float result;
    char op;  // Changed from operator to op

    printf("Enter first number: ");
    scanf("%f", &nums1);
    printf("Enter second number: ");
    scanf("%f", &nums2);
    printf("Choose your operator (+, -, *, /): ");
    scanf(" %c", &op);  // Changed from operator to op

    switch(op) {  // Changed from operator to op
        case '+':
            result = nums1 + nums2;
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = nums1 - nums2;
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = nums1 * nums2;
            printf("Result: %.2f\n", result);
            break;
        case '/':
            if(nums2 != 0) {
                result = nums1 / nums2;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Cannot divide by zero!\n");
            }
            break;
        default:
            printf("Error: Invalid operator!");
    }

    return 0;
}