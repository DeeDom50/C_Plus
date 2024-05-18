/*
name: dvante dominicci
date: 2024 may 17
description: program uses a decision structure to decide if a user-entered value is odd or even.
*/
#include<stdio.h>

int main(){             

int number;

printf("Enter an integer: ");

scanf("%d", &number);

if(number % 2 == 0)             //true if number is divisible by 2

    printf("%d is even.", number);

    else

printf("%d is odd. ", number);

return 0;

}