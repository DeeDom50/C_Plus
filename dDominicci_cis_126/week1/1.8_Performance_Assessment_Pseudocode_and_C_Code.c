/*
name: dvante dominicci
date: 2024 may 10
description: program that computes sales tax
*/

#include <stdio.h>

int main() {
    float taxRate = 0.08; // Tax rate
    float salesAmount; // Variable to store sales amount input by the user
    float salesTax; // Variable to store calculated sales tax
    float totalSales; // Variable to store total sales amount

    printf("Enter the sales amount:\n");
    scanf("%f", &salesAmount); // Read sales amount from user input

    salesTax = salesAmount * taxRate; // Calculate sales tax based on the input sales amount
    totalSales = salesAmount + salesTax; // Calculate total sales including tax

    printf("The sales tax is: %.2f\n", salesTax); // Print the sales tax
    printf("The total sales amount is: %.2f\n", totalSales); // Print the total sales amount

    return 0; 
}
