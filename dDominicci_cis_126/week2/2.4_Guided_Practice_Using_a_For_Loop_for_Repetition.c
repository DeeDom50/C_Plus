/*
name: devante dominicci
date: 2024 may 17
description: program uses a for loop to find factors of a user-entered number.
*/
#include<stdio.h>

int main(){

int count, number;

printf("Enter any number to find factors: \n");

scanf("%d", &number);

printf("The factors of %d are: \n", number);    //display for output screen

for(count=1; count<=number; count++)    //for() loop to step through each digit in the number

{

if(number%count == 0)     //finds factors using the modolus operator

{

printf("%d\n", count);  //   displays factors

}

}

return 0;

}