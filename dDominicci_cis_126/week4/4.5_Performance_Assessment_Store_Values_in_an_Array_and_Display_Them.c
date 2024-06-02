/*
name: devante dominicci
date: 2024 may 20
description:
*/
#include <stdio.h>

int main() {
    // Character array declaration
    char message[] = "My Friends' Ages Program";

    // Integer array declaration
    int ages[4];

    // Using assignment statements to store friends' ages
    ages[0] = 25;
    ages[1] = 27;
    ages[2] = 24;
    ages[3] = 26;

    // Display the message
    puts(message);

    // Display each age stored in the array
    printf("Friends' ages are:\n");
    for (int i = 0; i < 4; i++) {
        printf("Friend %d: %d years old\n", i + 1, ages[i]);
    }

    return 0;
}