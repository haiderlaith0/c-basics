#include <stdio.h>
#include <string.h>

int main() {
    int age;
    float gpa;
    char grade;
    char name[40];

    printf("How old are you? ");
    scanf("%d", &age);

    printf("What's your GPA? ");
    scanf("%f", &gpa);

    printf("What's your grade? ");
    getchar(); // Clear any leftover newline from previous input
    scanf("%c", &grade);

    printf("What's your full name? ");
    getchar(); // Clear any leftover newline
    fgets(name, sizeof(name), stdin);

    printf("You're %d years old\n", age);
    printf("Your GPA is %.2f\n", gpa);
    printf("Your grade is %c\n", grade);
    printf("Your name is %s\n", name);

    return 0;
}