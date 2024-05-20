/*
name: devante dominicci
date: 2024 may 13
description: program that checks if the user is an adult or a minor.
*/
#include <stdio.h>
int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are an adult.\n");
    } else {
        printf("You are a minor.\n");
    }

    return 0;
}