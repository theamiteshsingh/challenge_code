#include<stdio.h>
int main()
{
    int a[10],i, sum;
    sum=0;
    printf("Enter the numbers::::");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }
    // printf("Numbers are::");
    // for ( i = 0; i < 10; i++)
    // {
    //     printf("%d",a[i]);
    // }
    for(i=1;i<10;i++)
    {
        sum=sum+a[i];
    }
    printf("sum=%d",sum);
return 0;
}