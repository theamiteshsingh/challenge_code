#include<stdio.h>
void grtnum();
void main()
{
    grtnum();
}
void grtnum()
{
    int i,j;
    printf("Enter two numbers you want to compare:::");
    scanf("%d""%d",&i,&j);
    if (i>j)
    {
        printf("Greatest number is %d",i);
    }
    else
    {
        printf("greatest number is %d",j);
    }
    
}