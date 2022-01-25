#include<stdio.h>
int main()
{
    int i;
    printf("Enter your choice");
    scanf("%d",&i);
    switch (i)
    {
    case 1:
        printf("Its jan");
        break;
    case 2:
        printf("Its feb");
        break;
    case 3:
        printf("Its mar");
        break;
    
    default:
        break;
    }
}