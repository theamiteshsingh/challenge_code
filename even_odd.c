#include<stdio.h>
int main()
{
    int a[1000], i, n, odd, even;
    odd=0;
    even=0;
    printf(" Enter total numbers to be printed:: ");
    scanf("%d",&n);
    printf(" Enter %d numbers \n",n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Numbers are::");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    
        if(a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("\nTotal even numbers::%d",even);
    printf("\nTotal odd numbers::%d",odd);
}