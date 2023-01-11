//Program to get sum of digits of a number

#include <stdio.h>
#include <conio.h>
void main()
{
    int num, d, s = 0,a;
    printf("Enter a number :");
    scanf("%d",&num);
    a = num;
    while (num != 0)
    {
    d = num % 10;
    s += d;
    num = num / 10;
    }
printf("Sum of digits in %d is %d", a, s);
}