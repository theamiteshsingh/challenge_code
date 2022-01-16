#include<stdio.h>
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
   
}

int main()
{
    int a[1000], i, n, temp;
    printf("Enter total numbers to be printed");
    scanf("%d",&n);
    printf("Enter %d numbers::",n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Numbers are:::\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d",a[i]);
    }
    for ( i = 0; i < n/2 ; i++)
    {
        swap(&a[i],&a[n-i-1])    ;   
    }
    printf("Reversed array is:::\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
    
    
}