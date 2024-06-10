/*
name: devante dominicci
date: 2024 june 09
description: 5.5 Final Exam Hansen's Discount Supermarket
*/
#include <stdio.h>
#include <stdlib.h>

#define TAX_RATE 0.06
#define MAX_ITEMS 100
#define MAX_PRICE 10.0

void displayWelcomeMessage();
float calculateTotalWithTax(float total);

int main() {
    char welcomeMessage[] = "Welcome to Hansen's Discount Supermarket!";
    float prices[MAX_ITEMS];
    int numItems;
    float total = 0.0;
    float finalTotal;
    int i;

    // Display welcome message
    puts(welcomeMessage);

    // Prompt user for the number of items
    printf("Enter the number of items to total: ");
    scanf("%d", &numItems);

    // Ensure number of items does not exceed the array size
    if (numItems > MAX_ITEMS) {
        printf("The maximum number of items is %d. Please enter a valid number.\n", MAX_ITEMS);
        return 1;
    }

    // Input prices and calculate total
    for (i = 0; i < numItems; i++) {
        do {
            printf("Enter price for item %d: ", i + 1);
            scanf("%f", &prices[i]);
            if (prices[i] > MAX_PRICE) {
                printf("Invalid price. Please enter a value less than $10.00.\n");
            }
        } while (prices[i] > MAX_PRICE);

        total += prices[i];
    }

    // Calculate final total with tax
    finalTotal = calculateTotalWithTax(total);

    // Display total and final total with tax
    printf("Total sales: $%.2f\n", total);
    printf("Total with tax: $%.2f\n", finalTotal);

    return 0;
}

// Function to calculate the final total with tax
float calculateTotalWithTax(float total) {
    return total * (1 + TAX_RATE);
}