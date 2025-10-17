#include <stdio.h>
#include <math.h>

int main() {



double principal = 0.0;
double r = 0.0;
int n = 0;
int timeinyears = 0;

double finalamount = 0.0;

printf("How much is the initial amount of money you invested in? ");
scanf("%lf", &principal);
printf("How much is the interest rate (IN DECIMAL FORM!)? ");
scanf("%lf", &r);
printf("How much is the number of times interest is compounded per year? ");
scanf("%d", &n);
printf("How many years are you going to invest in? ");
scanf("%d", &timeinyears);

finalamount = principal * pow(1 + r / n, n * timeinyears);

printf("Final amount is %lf", finalamount);


    return 0;
}