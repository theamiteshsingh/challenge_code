#include <stdio.h>
int main()
{
    int n, sum = 0, a = 0, b = 1, c;
    printf("Enter frequency you want to print::::");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", a);
        c = a + b;
        a = b;
        b = c;
    }
}