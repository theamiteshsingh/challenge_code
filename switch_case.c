#include <stdio.h>
int n;
int main()
{
    int n;
    printf("\nEnter any month{in digits}:: ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("its janaury");
        break;
    case 2:
        printf("its feb");
        break;
    case 3:
        printf("its mar");
        break;
    case 4:
        printf("its apr");
        break;
    case 5:
        printf("its may");
        break;
    case 6:
        printf("its june");
        break;
    case 7:
        printf("its july");
        break;
    case 8:
        printf("its aug");
        break;
    case 9:
        printf("its sept");
        break;
    case 10:
        printf("its oct");
        break;
    case 11:
        printf("Its november");
    case 12:
        printf("Its december");
    default:
        printf("Wrong input...................Try again!!!!!!");
        break;
    }
    return 0;
}
