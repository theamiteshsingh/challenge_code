#include <stdio.h>
void size();
void adress();
int main()
{
    float a;
    printf("Enter any number::");
    scanf("%d", &a);
    size();
    adress();
}
void size()
{
    float a;
    printf("size of a is %d", sizeof(a));
}
void adress()
{
    float a;
    printf("\nadress of a is %u", &a);
}