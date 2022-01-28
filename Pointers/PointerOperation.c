#include <stdio.h>
int main()
{
    int a, b, c, r1, r2, r3, *p, *q, **r;
    a = 10;
    b = 20;
    c = 30;
    p = &a;
    q = &b;
    r = &p;
    r1 = *p + *q;
    r2 = *q + **r;
    r3 = c + **r;
    printf("r1=%d", r1);
    printf("\nr2=%d", r2);
    printf("\nr3=%d", r3);
}