//Using ternary operators

#include <stdio.h>
#include <math.h>
void main()
{
    int a, b, c;
    printf("Enter first number:");
    scanf("%d", &a);
    printf("Enter second number:");
    scanf("%d", &b);
    printf("Enter third number:");
    scanf("%d", &c);
    (a > b) ? ((c > a) ? printf("\nGreatest number is %d", c) : printf("\nGreatest number is %d", a)) : ((c > b) ? printf("\nGreatest number is %d", c) : printf("\nGreatest number is %d", b));
}
