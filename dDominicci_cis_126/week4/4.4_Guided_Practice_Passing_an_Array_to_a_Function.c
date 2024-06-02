/*
name: devante dominicci
date: 2024 june 02
description: 4.4_Guided_Practice_Passing_an_Array_to_a_Function
*/
#include <stdio.h>

// Function prototype
float averageScores(float scores[], int size);

int main() {
    char name[] = "ECPI University";    // Character array declaration storing a string   
    float scores[5] = {78.7, 98.4, 83.7, 85.3, 97.2};  // Array declaration and initialization
    float result;        

    // Call the averageScores function and store the result
    result = averageScores(scores, 5);

    // Print the class average
    printf("\nAt %s, your class average is: %.2f.\n", name, result);

    return 0;
}

// Function definition computing and displaying the average
float averageScores(float scores[], int size) {
    float average = 0.0;
    float total = 0.0;
    int counter;

    // Loop through each element of the scores array
    for (counter = 0; counter < size; counter++) {
        printf("The score in element %d is: %.2f\n", counter, scores[counter]);
        total = total + scores[counter];  // Accumulating total statement
    }

    // Print the total of the scores
    printf("Total = %.2f\n", total);

    // Compute the average
    average = total / size;

    // Return the computed average
    return average;
}