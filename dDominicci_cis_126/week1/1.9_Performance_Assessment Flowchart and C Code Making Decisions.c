/*
name: dvante dominicci
date: 2024 may 10
description: computes the average of 3 grades.
*/
#include <stdio.h>

int main() {
    int grade1 = 84;
    int grade2 = 98;
    int grade3 = 73;
    float average;

    average = (grade1 +  grade2 + grade3) / 3.0;

    printf("The average grade is: %.2f\n", average);

    return 0;
}