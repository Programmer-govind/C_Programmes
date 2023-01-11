//Using if statement to check eligibility for Driving License

#include <stdio.h>
#include <math.h>
void main()
{
    int age;
    printf("Enter age :");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("You are eligible to apply for Driving License");
    }
    if (age < 18)
    {
        printf("You are not eligible for Driving License");
    }
}
