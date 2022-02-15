#include<stdio.h>
int main()
{
    int a[10],i;
    printf("Enter 5 numbers::");
    for ( i = 0; i <= 10; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Numbers are:::");
    for ( i = 0; i <= 10; i++)
    {
        printf("a[%d]=%d\n",i , a[i]);
    }
    return 0;
}
