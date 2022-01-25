#include<stdio.h>
int add();
int sub();
int mul();
int div();
int main()
{
    int i;
    printf(" Choose option from these\n 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division \n 5.Exit");
    do
    {
        printf("\nEnter your option::");
        scanf("%d",&i);
        switch (i)
        {
        case 1:
            add();
            break;
        case 2:
            int sub();
            break;
        case 3:
            int mul();
            break;
        case 4:
            int div();
            break;
        default:
            break;
        }
    } while (i!=4);
}
int add(){
    int a[100],sum=0,i,n;
    printf("Enter numbers to be printed:::");
    scanf("%d",&n);
    printf("Enter %d numbers::",n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
    for ( i = 0; i < n; i++)
    {
        sum=a[i]+sum;
    }
    printf("\nTotal sum of %d numbers is %d",n,sum);
}