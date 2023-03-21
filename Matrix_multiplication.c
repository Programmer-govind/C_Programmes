
// Program to get product of two matrices
#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, k, r1, r2, c1, c2, a[10][10], b[10][10], c[10][10];
    printf("\nEnter row and column for first Matrix : ");
    scanf("%d%d", &r1, &c1);
    printf("\nEnter row and column for second Matrix : ");
    scanf("%d%d", &r2, &c2);
    if (r2 == c1)
    {
        printf("\nEnter Matrix A : ");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("\nMatrix A is :\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                printf("%d\t", a[i][j]);
            }
            printf("\n");
        }
        printf("\nEnter Matrix B : ");
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        printf("\nMatrix B is :\n");
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("%d\t", b[i][j]);
            }
            printf("\n");
        }
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                c[i][j] = 0;
                for (k = 0; k < c1; k++)
                {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        printf("\nResultant Matrix is :\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Order not match. Multiplication not possible.");
    }
}
