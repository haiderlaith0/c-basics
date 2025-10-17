#include <stdio.h>
#include <math.h>

int main() {


double radius;
double area = 0.0;
const double PI = 3.14159;


printf("How much is the radius of the circle? ");
scanf("%lf", &radius);

area = pow(radius, 2) * PI;

printf("The area of the circle is: %lf", area);




    return 0;
}