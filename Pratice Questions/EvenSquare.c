#include<stdio.h>
int main()
{
    int m;
    printf("Enter number to be print:::");
    scanf("%d",&m);
    if (m%2==0)
    {
        printf("%d",m*m);
    }
    else{
        printf("Enter even number");
    }
}