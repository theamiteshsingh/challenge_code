#include<stdio.h>
int main()
{
    int a[100][100],i,j,r,c;
    printf("Enter row::");
    scanf("%d",&r);
    printf("Enter colum::");
    scanf("%d",&c);
    printf("Enter %d numbers:: ", r*c);
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Numbers are::\n");
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    int max=a[0][0];
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            if(a[i][j]>max)
            {
                max=a[i][j];
            }
        }
    }
    printf("Maxm=%d",max);
}