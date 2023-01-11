//Using switch function to check whether an alphabet is vowel or constant

#include <stdio.h>
#include <conio.h>
void main()
{
    char alph;
    printf("Enter a character you want to check: ");
    scanf("%c", &alph);
    switch (alph)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("\nThe alphabet %c is vowel", alph);
        break;
    default:
        printf("\nThe alphabet %c is consonant", alph);
    }
}