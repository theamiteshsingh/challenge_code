#include<stdio.h>
int main()
{
    int a, *p;
    printf("Enter any number:::");
    scanf("%d",&a);
    p=&a;
    printf("P= %u",p);
    printf("\nadress of a %u",&a);
    printf("\n*p=%d",*p);

}