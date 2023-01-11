
//Binary Search

#include <stdio.h>
#include <conio.h>
void main()
{
    int n, i, beg, end, mid, list[50], num;
    clrscr();
    printf("\nHow many elements you have ");
    scanf("%d", &n);
    printf("\nEnter your list of numbers : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &list[i]);
    }
    for (i = 0; i <= 5; i++)
    {
        printf("\n\nEnter the number you want to search : ");
        scanf("%d", &num);
        beg = 0;
        end = n - 1;
        while (beg <= end)
        {
            mid = (beg + end) / 2;
            if (list[mid] == num)
            {
                printf("\nFound at position %d", mid + 1);
                break;
            }
            else if (num > list[mid])
            {
                beg = mid + 1;
            }
            else if (num < list[mid])
            {
                end = mid - 1;
            }
        }

        if (beg > end)
        {
            printf("\nNumber Not Found");
        }
    }
    getch();
}

//Binary Search