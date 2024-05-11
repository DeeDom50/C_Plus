/*
name: devante dominicci
date: 2024 may 10
description: computes the average of 3 grades.
*/
#include <stdio.h>  

int main() {  
    // Declare and initialize integer variables with their values
    int grade1 = 84;  
    int grade2 = 98;  
    int grade3 = 73;  

    // Declare a float variable to store the average of the grades
    float average;

    // Calculate the average of three grades and store in average variable
    average = (grade1 + grade2 + grade3) / 3.0;  

    // Print the average grade formatted to two decimal places
    printf("The average grades is: %.2f\n", average);  

    // Checking if the average grade is greater than 65 and print a message if true
    if (average > 65) {
        printf("Youve passed!");
    }

    return 0;
}