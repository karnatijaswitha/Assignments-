#include <stdio.h>
int main()
{
    float orderAmount, discount = 0, deliveryCharge = 0, finalAmount;
    int membership;
    printf("Enter order amount: ");
    scanf("%f", &orderAmount);

    printf("Enter membership type (1 for Premium, 0 for Regular): ");
    scanf("%d", &membership);

    if (orderAmount >= 500)
    {
        deliveryCharge = 0;

        if (membership == 1)
        {
            discount = orderAmount * 0.10;
        }
    }
    else
    {
        deliveryCharge = 50;
        discount = 0;
    }

    finalAmount = orderAmount - discount + deliveryCharge;

    printf("\nFinal payable amount = Rs. %.2f", finalAmount);
}    