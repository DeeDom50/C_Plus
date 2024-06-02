/*
name: devante dominicci
date: 2024 june 02
description: a function that will pass the array to the definition and compute and display their total, 
so they can determine if they won the match at the end of the game.
*/
#include <stdio.h>

// Function prototype
int computeTotal(int scores[], int size);

int main() {
    int scores[9];  // Array declaration to store 9 values
    int totalScore;

    // Use a for loop to store user-entered scores for all 9 holes
    for (int i = 0; i < 9; i++) {
        printf("Enter score for hole %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    // Call the function to compute the total score
    totalScore = computeTotal(scores, 9);

    // Use a for loop to display each hole's score stored in the array element
    printf("\nScores for each hole:\n");
    for (int i = 0; i < 9; i++) {
        printf("Hole %d: %d\n", i + 1, scores[i]);
    }

    // Display the overall total on the output screen
    printf("\nTotal score: %d\n", totalScore);

    return 0;
}

// Function definition to compute the total score
int computeTotal(int scores[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += scores[i];  // Accumulating total statement
    }
    return total;
}