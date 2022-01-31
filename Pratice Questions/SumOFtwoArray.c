#include <stdio.h>
int main()
{
    int a[100][100], b[200][200], sum[300][3000], i, j, r, c;
    printf(":For 1st matrix:\n");
    printf("Enter numbers of row::");
    scanf("%d", &r);
    printf("Enter numbers of colums::");
    scanf("%d", &c);
    printf("Enter %d numbers of arrays for matrix 1", r * c);
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("First array is:::::\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("Enter %d numbers of arrays for matrix 2", r * c);
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("Second array is:::::\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    /*Sum of two array*/
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("Sum of two matrix is::\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
}