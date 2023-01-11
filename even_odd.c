//Program to check whether a number is even or odd

#include <stdio.h>
#include <math.h>
void main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("\n%d is even number", num);
    else
        printf("\n%d is odd number", num);
    printf("\n\nThank You for visiting. ");
}
