/*
name: devante dominicci
date: 2024 june 2
description: introduction to arrays
*/
#include <stdio.h>

int main() {
    int values[3] = {3, 10, 6};  // array declaration and initialization of values
    int counter;                 // control variable for loop to step through each array element

    // Displaying the initialized values of the array
    printf("Initialized array values:\n");
    for (counter = 0; counter < 3; counter++) {
        printf("The value in element %d is: %d\n", counter, values[counter]);
    }

    // Assigning new values to the array elements
    values[0] = 15;
    values[1] = 18;
    values[2] = 19;

    // Displaying the assigned values of the array
    printf("\nAssigned array values:\n");
    for (counter = 0; counter < 3; counter++) {
        printf("The value in element %d is: %d\n", counter, values[counter]);
    }

    // Allowing user to input values into the array
    printf("\nEnter three values:\n");
    for (counter = 0; counter < 3; counter++) {
        printf("Enter value for element %d: ", counter);
        scanf("%d", &values[counter]);
    }

    // Displaying the user-entered values of the array
    printf("\nUser-entered array values:\n");
    for (counter = 0; counter < 3; counter++) {
        printf("The value in element %d is: %d\n", counter, values[counter]);
    }

    return 0;
}