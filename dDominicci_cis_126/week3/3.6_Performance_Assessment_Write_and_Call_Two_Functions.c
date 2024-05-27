/*
name: devante dominicci
date: 2024 may 26
description: use a function to display a message and prompt the user to enter their dog's age.
*/
#include <stdio.h>

// Function prototypes
void getDogAge(int *dogAge);
void computeHumanYears(int dogAge);

int main() {
    int dogAge;

    getDogAge(&dogAge);           // Call the function to get the dog's age
    computeHumanYears(dogAge);    // Call the function to compute and display the dog's age in human years

    puts("End of Program");       // Display end of program message

    return 0;
}

// Function to get the dog's age
void getDogAge(int *dogAge) {
    puts("Enter your dog's age: ");  // Display prompt message
    scanf("%d", dogAge);             // Read the dog's age
}

// Function to compute and display the dog's age in human years
void computeHumanYears(int dogAge) {
    int humanYears = dogAge * 7;     // Compute the dog's age in human years
    printf("Your dog's age in human years is: %d\n", humanYears);  // Display the result
}
