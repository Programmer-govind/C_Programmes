//Program to get the greatest number among three numbers

#include <stdio.h>
#include <math.h>
int main()
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
        printf("%d is greatest number", a);
    }
    else
    {
        if (b > a && b > c)
            {printf("%d is greatest number", b);}
    
else
        if (c > a && c > b)
            {printf("%d is greatest number", c);}
    }
    return 0;
}