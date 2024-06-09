/*
name: devante dominicci
date: 2024 june 09
description: a program that declares an array of 10 integers, initializes the array, 
sets the element location at 100, prints the values for array 1-11, and prints the 11th value twice.
*/
#include <stdio.h>

int main()
{
    // Declare an array of 10 integers
    int n[10];
    int i, j;

    // Initialize elements of the array
    for (i = 0; i <= 10; i++)
    {
        n[i] = i + 100;  // Set element at location i to i + 100
    }

    // Output each array element's value
    for (j = 0; j <= 10; j++)
    {
        printf("Element[%d] = %d \n", j, n[j]);
    }

    // Output the tenth element again
    printf("Element[%d] = %d", j, n[10]);

    return 0;
}