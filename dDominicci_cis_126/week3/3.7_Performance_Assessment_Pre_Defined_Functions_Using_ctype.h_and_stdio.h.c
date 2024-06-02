/*
name: devante dominicci
date: 2024 may 26
description: a program that uses functions from the ctype.h and stdio.h header files.
*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char letter;

    // Prompt the user to enter a letter
    puts("Enter a letter: ");
    scanf(" %c", &letter); // Read a character from the user

    // Check if the letter is uppercase
    if (isupper(letter)) {
        puts("The letter is uppercase.");
    }
    // Check if the letter is lowercase
    else if (islower(letter)) {
        puts("The letter is lowercase.");
    }
    // If it's not a letter
    else {
        puts("The input is not a letter.");
    }

    return 0;
}
