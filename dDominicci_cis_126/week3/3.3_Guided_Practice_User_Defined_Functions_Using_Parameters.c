/*
name: devante dominicci
date: 2024 may 25
description: function that passes a value (the year) into the function definition. 
Then, the function definition will make decisions to see if that year is a leap year.
*/
#include <stdio.h>

// Function prototype with an incoming parameter and returning value
int LeapYear(int year);

int main() {
    int year, answer;

    printf("Enter a year: \n");
    scanf("%d", &year);

    answer = LeapYear(year); // Function call

    if (answer == 1) {
        printf("\n%d is a leap year.", year);
    } else {
        printf("\n%d is not a leap year.", year);
    }

    return 0;
}

// Function definition - finds leap year
int LeapYear(int year) {
    if (year % 100 == 0) {
        if (year % 400 == 0) {
            return 1; // Return true (1) if leap year found
        } else {
            return 0; // Return false (0) if leap year not found
        }
    } else {
        if (year % 4 == 0) {
            return 1; // Return true (1) if leap year found
        } else {
            return 0; // Return false (0) if leap year not found
        }
    }
}
