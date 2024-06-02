/*
name: devante dominicci
date: 2024 june 02
description: a program that uses two character arrays. The first array should store the word "ECPI" as a string, 
and the second one should store each letter of the word "University" in each element of the array. 
*/
#include <stdio.h>
#include <string.h>

int main() {
    // Declare character arrays
    char word1[] = "ECPI";
    char word2[] = "University";

    // Find the length of both words using strlen()
    int length1 = strlen(word1);
    int length2 = strlen(word2);

    // Display the words
    printf("Word 1: %s\n", word1);
    printf("Word 2: %s\n", word2);

    // Display the length of both words
    printf("The length of '%s' is: %d\n", word1, length1);
    printf("The length of '%s' is: %d\n", word2, length2);

    return 0;
}