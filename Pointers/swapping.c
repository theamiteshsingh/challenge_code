#include<stdio.h>
int main()
{
    int a,b;
    int *p,*q,temp;
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
    // a=10;
    // b=20;
    p=&a;
    q=&b;
    temp=*p;
    *p=*q;
    *q=temp;
    printf("Numbers after swapping:::a::%d\t b::%d",a,b);
}
