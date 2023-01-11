//Palindrome Number

#include <stdio.h>
#include <conio.h>
void main()
{
    int n, res = 0, d, p;
    printf("\nNote :- A palindromic number is a number that remains the same when its digits are reversed.");
    printf("\n\nEnter a number to check : ");
    scanf("%d", &n);
    p = n;
    while (n != 0)
    {
        d = n % 10;
        res = res * 10 + d;
        n = n / 10;
    }
    if (res == p)
        printf("\n%d is a palindrome number", p);
    else
        printf("\n%d is not a palindrome number", p);
}