#include <stdio.h>
#include <string.h>
struct Employee
{
    int id;
    char name[20];
    struct date
    {
        int dd;
        int mm;
        int yyyy;
    } doj;
} e1, e2;
int main()
{
    e1.id = 101;
    strcpy(e1.name, "Amitesh singh");
    e1.doj.dd = 10;
    e1.doj.mm = 11;
    e1.doj.yyyy = 2014;

    e2.id = 102;
    strcpy(e2.name, "KAnupriya s");
    e2.doj.dd = 13;
    e2.doj.mm = 12;
    e2.doj.yyyy = 2016;

    printf("Employee id: %d\n", e1.id);
    printf("Employee name: %s\n", e1.name);
    printf("Employye date of joining(DD/MM/YYYY)::%d%d%d\n", e1.doj.dd, e1.doj.mm, e1.doj.yyyy);

    printf("Employee id: %d\n", e2.id);
    printf("Employee name: %s\n", e2.name);
    printf("Employye date of joining(DD/MM/YYYY)::%d%d%d\n", e2.doj.dd, e2.doj.mm, e2.doj.yyyy);
}