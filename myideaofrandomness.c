#include <stdio.h>   // For input/output functions like printf
#include <unistd.h>  // For getpid() to get the process ID
#include <stdlib.h>  // For srand(), rand(), and other utility functions
#include <time.h>    // For time() to seed the random number generator

int main() {
    // Array containing the digits 0-9
    int mainnums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    // Seed the random number generator using a combination of the current time,
    // process ID, and the address of mainnums to ensure randomness
    srand(time(NULL) ^ getpid() ^ (uintptr_t)&mainnums);

    // Array to store 16 randomly picked digits from mainnums
    int randomnums[32];

    // Define the range for random number generation
    int sizeofarray = sizeof(randomnums) / 4; // The size of the array named randomnums
    int randomchoice; // Variable to store the randomly chosen index

    // Loop to fill randomnums with random digits from mainnums
    for (int i = 0; i < sizeofarray; i++) {
        // Generate a random index between 0 and 9
        randomchoice = rand() % 10;

        // Assign the randomly chosen digit from mainnums to randomnums
        randomnums[i] = mainnums[randomchoice];

        // Print the randomly chosen digit
        printf("%d", randomnums[i]);
    }

    return 0; // Exit the program
}