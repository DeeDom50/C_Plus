/*
name: devante dominicci
date: 2024 may 26
description: how to use the puts() function to display output and gets() to store a string from the stdio.h. 
*/
#include <string.h>  // Header file to use the strlen() function
#include <stdio.h>   // Header file to use the gets(), puts(), and printf() functions

int main() {
    char movie[30];    // Character array to store a string

    puts("What is your favorite movie?");   // Displays information to the output screen
    fgets(movie, sizeof(movie), stdin);     // Stores user textual input (replaces gets() with fgets())
    
    // Remove the newline character if it's present
    size_t len = strlen(movie);
    if (len > 0 && movie[len - 1] == '\n') {
        movie[len - 1] = '\0';
    }

    printf("\nThere are %zu characters (including spaces) in your movie title.", strlen(movie));  // strlen counts the characters stored in the array

    return 0;
}

