#include<stdio.h>
int main()
{
    int i,a,sum=0;
    printf("Enter number:::");
    scanf("%d",&i);
    while (i>0)
    {
        a=i%10;
        sum=sum+a;
        i=i/10;
    }
    printf("Sum of digits are:: %d", sum);
}