#include<stdio.h>
int main()
{
    int a[100], i, n, temp;
    printf("Enter numbers to be printed:::");
    scanf("%d",&n);
    printf("Enter %d numbers::",n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Numbers are::\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
    temp=a[0];
    a[0]=a[n-1];
    a[n-1]=temp;
    printf("\nSwaped numbers are::\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
}