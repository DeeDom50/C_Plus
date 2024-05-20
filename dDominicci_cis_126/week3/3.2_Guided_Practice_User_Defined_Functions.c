/*
name: devante dominicci
date: 2024 may 20
description: User-Defined Functions
*/
#include<stdio.h> 
void DisplayMessage(void); //function prototype 
int main() 
{ 
int num1, num2, addition; 
DisplayMessage(); //function call 
scanf("%d", &num1); 
scanf("%d", &num2); 
addition=num1+num2; 
printf("The numbers added together are: %d\n", addition); 
return 0; 
} 
void DisplayMessage(void) //function definition 
{ 
printf("Welcome to the Addition Program\n"); //Displays mesages 
printf("Enter two numbers to be added\n"); 
return; 
} 