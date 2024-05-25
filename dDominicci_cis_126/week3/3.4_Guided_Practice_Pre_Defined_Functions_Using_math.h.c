/*
name: devante dominicci
date: 2024 may 25
description: how to use the square root (sqrt()) and cubed root (cbrt()) functions from the math.h header file.
*/
#include <stdio.h>
#include <math.h> // Header file that holds the function definitions of sqrt() and cbrt()

int main() {
    float number;

    printf("Enter a number: ");
    scanf("%f", &number);

    printf("The square root of %.2f is: %.2f\n", number, sqrt(number));  // Predefined function that finds the square root of a number
    printf("The cubed root of %.2f is: %.2f\n", number, cbrt(number));   // Predefined function that finds the cubed root of a number

    return 0;
}
