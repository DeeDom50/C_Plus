/*
name: devante dominicci
date: 2024 may 20
description: The sum and differnce of two numbers.
*/
#include <stdio.h>

// Function prototypes
int add(int a, int b);
int subtract(int a, int b);

int main() 
{
    int a, b;
    int sum, difference;

    printf("Enter the first number :  ");
    scanf("%d", &a);

    printf("Enter the second number : ");
    scanf("%d", &b);

    sum = add(a , b);
    difference = subtract(a, b);

    printf("The sum of the two numbers is : %d \n", sum);

    printf("The difference of the two numbers is: %d \n", difference);

    return 0;
}

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}