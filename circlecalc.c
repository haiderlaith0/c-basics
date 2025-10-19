#include <stdio.h>

int main() {


float radius = 0.0;
float area = 0.0;
const double Pi = 3.14159;


printf("How much is the radius of the circle? ");
scanf("%f", &radius);

area = Pi * radius * radius;

printf("The area of the circle is: %.2f", area);




    return 0;
}