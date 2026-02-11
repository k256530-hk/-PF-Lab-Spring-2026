#include <stdio.h>

int main() {

    float totalBill, discount, finalAmount;
    printf("Enter total bill amount: ");
    scanf("%f", &totalBill);

    if (totalBill >= 5000) {
        discount = totalBill * 0.20;
    }
    else if (totalBill >= 3000) {
        discount = totalBill * 0.10;
    }
    else {
        discount = 0;
    }

    finalAmount = totalBill - discount;


    printf("Discount Amount: %.2f\n", discount);
    printf("Final Amount to Pay: %.2f\n", finalAmount);

    return 0;
}
