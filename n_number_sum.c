// #include<stdio.h>
// int main()
// {
//     int a[1000],i,n;
//     int sum=0;
//     printf("Number of numbers you want to print::");
//     scanf("%d",&n);
//     printf("Enter %d nos::", n);
//     for ( i = 0; i < n; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("Numbers are::");
//     for ( i = 0; i < n; i++)
//     {
//         printf("%d\n",a[i]);
//     }
//     for (i = 0; i < n; i++)
//     {
//         sum=sum+a[i];
//     }
//     printf("Sum=%d",sum);
// }

#include<stdio.h>
int main()
{
    int a[1000],n,i,sum;
    sum=0;
    printf("number of number to be printed:::");
    scanf("%d",&n);
    printf("Enter %d numbers::", n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Numbers are::");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
    for ( i = 0; i < n; i++)
    {
        sum=sum+a[i];
    }
    printf("\nSum=%d",sum);
}