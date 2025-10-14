#include <stdio.h>

int main() {
    float nums1;
    float nums2;
    float result;
    char operator;

    printf("Enter first number: ");
    scanf("%f", &nums1);
    printf("Enter second number: ");
    scanf("%f", &nums2);
    printf("Choose your operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch(operator) {
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