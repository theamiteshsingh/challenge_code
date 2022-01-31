#include<stdio.h>
int grtnum();
int main()
{
    int result;
    result=grtnum();
    printf("The greater number is %d",result);
}
int grtnum()
{
    int i,j;
    printf("Enter two numbers that you want to compare:::");
    scanf("%d%d",&i,&j);
    if (i>j)
    {
        return(i);
    }
    else{
        return(j);
    }
}