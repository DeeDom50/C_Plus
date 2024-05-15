/*
name: dvante dominicci
date: 2024 may 13
description: program that totals the numbers between 100 and 200 and displays the final total.
*/
#include <stdio.h>

int main() {
    int total = 0; // Initialize the accumulator for the total

    // Loop from 100 to 200 
    for (int i = 100; i <= 200; i++) {
        total += i; // Add each number to the total
    }

    // Display the grand total of the values
    printf("The grand total of numbers from 100 to 200 is: %d\n", total);

    return 0; 
}