#include <stdio.h>
#include <string.h>
struct Distance
{
    int feet;
    float inch;
} d1, d2, res;
int main()
{
    // Details of 1st distance
    printf("Enter 1st distance\n");
    printf("Enter feet:: ");
    scanf("%d", &d1.feet);
    printf("Enter inch:: ");
    scanf("%d", &d1.inch);

    // Details of 2nd distance
    printf("Enter 2st distance\n");
    printf("Enter feet:: ");
    scanf("%d", &d2.feet);
    printf("Enter inch:: ");
    scanf("%d", &d2.inch);

    // adding distance
    res.feet = d1.feet + d2.feet;
    res.inch = d1.inch + d2.inch;

    // convert inches into feet if greter than 12
    while (res.inch >= 12.0)
    {
        res.inch = res.inch - 12.0;
        res.feet=res.feet+1;
    }
    printf("\nSum of distance = %d ' %f", res.feet, res.inch);
}
