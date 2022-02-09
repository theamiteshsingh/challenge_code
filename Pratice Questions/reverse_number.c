#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter number::");
    scanf("%d", &n);
    printf("Reversed Number::");
    while (n > 0)
    {
        i = n % 10;
        printf("%d", i);
        n = n / 10;
    }
}