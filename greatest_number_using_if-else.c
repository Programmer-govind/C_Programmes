//Program to get the greatest number among three numbers

#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, c;
    printf("Enter first number :");
    scanf("%d", &a);
    printf("Enter second number :");
    scanf("%d", &b);
    printf("Enter third number :");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("\n%d is greatest number", a);
    }
    else
    {
        if (b > a && b > c)
            {printf("\n%d is greatest number", b);}
    
else
        if (c > a && c > b)
            {printf("%\nd is greatest number", c);}
    }
    getch();
}
