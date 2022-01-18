#include<stdio.h>
int main()
{
    int a[100][100],b[100][100],i,j,r,c;
    printf("Enter row::");
    scanf("%d",&r);
    printf("Enter colum::");
    scanf("%d",&c);
    printf("Enter %d numbers:::\n", r*c);
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix is::\n");
    for ( i = 0; i < c; i++)
    {
        for ( j = 0; j < r; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Transpose matrix is:::\n");
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            b[i][j]=a[j][i];
        }
    }
    for ( i = 0; i < c; i++)
    {
        for ( j = 0; j < r; j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
}