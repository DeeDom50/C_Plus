/*
name: dvante dominicci
date: 2024 may 13
description: program that totals the numbers between 100 and 200 and displays the final total.
*/
#include <stdio.h>

// Function prototypes
void printWelcomeMessage();
int addTwoNumbers(int a, int b);

int main() {
    printWelcomeMessage();
    int result = addTwoNumbers(5, 3);
    printf("The sum is: %d\n", result);
    return 0;
}

// Function implementations
void printWelcomeMessage() {
    printf("Welcome to this C program!\n");
}

int addTwoNumbers(int a, int b) {
    return a + b;
}