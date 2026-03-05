#include <stdio.h>

int main()
{
    float price, total = 0, discount, final_amount;
    int choice;

    do
    {
        printf("Enter price of item: ");
        scanf("%f", &price);

        total = total + price;

        printf("Add another item? (1 = Yes, 0 = No): ");
        scanf("%d", &choice);

    } while(choice == 1);

    if(total > 3000)
    {
        discount = total * 0.10;
    }
    else
    {
        discount = 0;
    }

    final_amount = total - discount;

    printf("\nTotal Bill = %.2f", total);
    printf("\nDiscount = %.2f", discount);
    printf("\nFinal Payable Amount = %.2f", final_amount);

    return 0;
}
