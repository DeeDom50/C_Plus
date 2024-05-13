/*
name: dvante dominicci
date: 2024 may 13
description: program that prints a message based on the number of years of service.
*/
#include <stdio.h>

int main() {
    int yearsOfService;  // Declare an integer variable to store years of service

    // Prompt the user to enter their years of service
    printf("How many years of service do you have?\n");
    
    // Read the integer value entered by the user and store it in the variable yearsOfService
    scanf("%d", &yearsOfService);

    // Display the years of service entered by the user
    printf("How many years of service?: %d\n", yearsOfService);  

    // Check if the years of service are 25 or more
    if (yearsOfService >= 25) {
        // If true, print that the user receives a gold watch
        printf("You receive a gold watch.\n");
    }
    // If the first condition is not met, check if the years of service are 15 or more
    else if (yearsOfService >= 15) {  
        // If true, print that the user receives a silver pen
        printf("You receive a silver pen.\n");
    }
    // If the previous conditions are not met, check if the years of service are 5 or more
    else if (yearsOfService >= 5) {  
        // If true, print that the user receives an attractive pin
        printf("You receive an attractive pin.\n");
    }
    // If none of the above conditions are met
    else {
        // Print that the user receives a pat on the back
        printf("You receive a pat on the back.\n");
    }
    
    // End of the program, return 0 to indicate that the program finished successfully
    return 0;
}