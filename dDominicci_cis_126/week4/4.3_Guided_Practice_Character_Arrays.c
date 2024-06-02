/*
name: devante dominicci
date: 2024 june 02
description: 4.3 Guided Practice Character Arrays
*/
#include <stdio.h>
#include <string.h>

int main() {
    char name[20];                         // array declaration
    char prompt[] = "Enter Your Name: ";   // array declaration and initialization
    char prompt1[] = "Your";               // array declaration and initialization of string characters

    // Display the prompt using puts()
    puts(prompt);

    // Store the user's name using fgets()
    fgets(name, sizeof(name), stdin);

    // Remove the newline character from the user input if present
    name[strcspn(name, "\n")] = '\0';

    // Display the prompt1 and user's name using printf() with %s
    printf("%s name is: %s\n", prompt1, name);

    return 0;
}