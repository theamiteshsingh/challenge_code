#include <stdio.h>
int add();
int sub();
int mul();
int div();
int main()
{
    int i;
    printf(" Choose option from these\n 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division \n 5. Exit");
    do
    {
        printf("\nEnter your option::");
        scanf("%d", &i);
        switch (i)
        {
        case 1:
            add();
            break;
        case 2:
            sub();
            break;
        case 3:
            mul();
            break;
        case 4:
            div();
            break;
        default:
            break;
        }
    } while (i != 4);
}
int add()
{
    int a[100], sum = 0, i, n;
    printf("Enter numbers to be added:::");
    scanf("%d", &n);
    printf("Enter %d numbers::", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum = a[i] + sum;
    }
    printf("\nTotal sum of %d numbers is %d", n, sum);
}
int sub()
{
    int b[100], j, p;
    printf("Enter numbers to be subtracted:::");
    scanf("%d", &p);
    printf("Enter %d numbers::", p);
    for (j = 0; j < p; j++)
    {
        scanf("%d", &b[j]);
    }
    for (j = 0; j < p; j++)
    {
        printf("%d\t", b[j]);
    }
    int sub = b[0];
    for (j = 1; j < p; j++)
    {
        sub = sub - b[j];
    }
    printf("\nsubtraction of %d numbers is %d", p, sub);
}
int mul()
{
    int a[100], mul = 1, i, n;
    printf("Enter numbers to be multiplied:::");
    scanf("%d", &n);
    printf("Enter %d numbers::", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    for (i = 0; i < n; i++)
    {
        mul = a[i] * mul;
    }
    printf("\nMultiplication of %d numbers is %d", n, mul);
}
int div()
{
    int a, b, c;
    printf("Enter two numbers to be divided:::");
    scanf("%d%d", &a, &b);
    c = a / b;
    printf("Division of two numbers is %d\n", c);
}
