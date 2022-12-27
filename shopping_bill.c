#include <stdio.h>
#include <conio.h>
void main()
{
    clrscr();
    int pcode[20], cost[20], qty[20], amt[20];
    float n, total, discount, netamount;
    int i;
    total = 0;
    printf("\nHow many products are there : ");
    scanf("%f", &n);
    printf("\nEnter the shopping details :\n ");
    for (i = 0; i < n; i++)
    {
        printf("\n\tEnter the product code : ");
        scanf("%d", &pcode[i]);
        printf("\n\tEnter the Product cost : ");
        scanf("%d", &cost[i]);
        printf("\n\tEnter the Product quantity : ");
        scanf("%d", &qty[i]);
        amt[i] = cost[i] * qty[i];
    }
    printf("\n-----------------------------------------------------------");
    printf("\nPcode \tCost \tQuantity \tAmount");
    printf("\n-----------------------------------------------------------\n");
    for (i = 0; i < n; i++)
    {
        printf("\n%5d \t%5d \t%5d \t%13d", pcode[i], cost[i], qty[i], amt[i]);
        total += amt[i];
    }
    printf("\n-----------------------------------------------------------\n");
    printf("\nTotal amount is Rs. %.2f", total);
    discount = (10 * total) / 100;
    netamount = total - discount;
    printf("\nDiscount @10 percent is Rs.%.2f", discount);
    printf("\nNet amount to be paid is Rs.%.2f", netamount);
    printf("\n-----------------------------------------------------------");
    printf("\nThank You for Shopping");
    printf("\n-----------------------------------------------------------");
    getch();
}