#include<stdio.h>
int main()
{
    int a,b,c,d;
    a=90;
    b=99;
    c=45;
    d=(a>b && a>c)?a : (b>c)?b: c ;
    printf("greatest number:: %d", d);
    return 0;
}