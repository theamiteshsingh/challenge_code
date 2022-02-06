#include<stdio.h>
int main()
{
    int a[5],i,n;
    printf("Enter numbers you want to print");
    scanf("%d",&n);
    printf("Enter %d numbers::",n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Numbers are:::");
    for ( i = 0; i < n; i++)
    {
        printf("a[%d]=%d\n",i , a[i]);
    }
    printf("Reversed array is::");
    for ( i = n-1; i >=0; i--)
    {
        printf("%d\n",a[i]);
    }
    
    return 0;
}