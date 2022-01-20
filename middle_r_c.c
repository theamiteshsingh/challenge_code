#include <stdio.h>
int main()
{
    int a[100][100], i, j, r;
    printf("Enter row::");
    scanf("%d", &r);
    printf("Enter colum::");
    scanf("%d", &r);
    printf("Enter %d numbers::", r * r);
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < r; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Matrix is :::\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < r; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("Enter middle column::");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < r; j++)
        {
            if (j == r / 2)
            {
                printf("%d\t", a[i][j]);
            }
        }
    }
    printf("\nEnter middle row::");
    for (i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            if (i == r / 2)
            {
                printf("%d\t", a[i][j]);
            }
        }
    }
}