#include <stdio.h>

int main() {
    float taxRate = .08;
    float salesAmount;
    float salesTax = salesAmount * taxRate;
    float totalSales = salesAmount + salesTax;;

    printf("Enter the sales amount: ");
    scanf("%f", &salesAmount);

    printf("Here is the sales tax: %.2f\n", salesTax);
    printf("Total Sales Amount: %.2f\n", totalSales);

    return 0;
}