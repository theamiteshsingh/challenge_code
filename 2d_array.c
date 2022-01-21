#include<stdio.h>
int main()
{
    int a[4][4],i,j;
    printf("Array is::");
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            scanf("%d", &a[i][j]);
        }
        
    }
    printf("printed array is:::::\n");
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    

}
