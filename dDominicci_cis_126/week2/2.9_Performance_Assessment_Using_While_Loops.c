/*
name: devante dominicci
date: 2024 may 18
description: program that allows the user to enter a passcode.
*/
#include <stdio.h>

int main() {
    int passcode = 11862;
    int userPasscode;
    int attempts = 0;

    while (attempts < 3) {
        printf("What is the password (you get three tries)? numbers only: ");
        scanf("%d", &userPasscode);
        attempts++;

        if (userPasscode == passcode) {
            printf("You entered the correct password.\n");
            break;
        } else {
            printf("Try again!\n");
        }
    }
    return 0;
}