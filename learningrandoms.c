#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    //! printf("%d", rand());

    srand(time(NULL));

    printf("The random number is: %d", rand());

    return 0;

}