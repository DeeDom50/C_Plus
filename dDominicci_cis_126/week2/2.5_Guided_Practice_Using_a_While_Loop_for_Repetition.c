/*
name: devante dominicci
date: 2024 may 17
description: program below uses a while loop to allow the user to enter five temperatures.
*/
#include<stdio.h>

int main(){

int num, temp;

float total, average;      //the float data type stores numbers containing decimal places

total = 0.0;              //we need to initalize total to zero prior to computing

num=1;                   //start the while loop at 1

printf("Enter five termperatures to find the average.\n");

while(num <=5)           //end while loop at 5
{

printf("What is the daily temperature: ");

scanf("%d", &temp);

num+=1;               //counter to increment loop

total+=temp;          //accumulating total statement

}
average=total/5.0;       //computes average

printf("\nThe average temperature is %.2f degrees ", average);

return 0;

}