#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
    char *name;
    char *address;
    int age;
};
int main()
{
    struct student *s;
    s = (struct student *)malloc(sizeof(struct student));
    printf("Enter stdent name:::");
    gets(s->name);
    printf("Enter adress:::");
    gets(s->address);
    s->age = 24;
    printf("Student name: %s\nAdress=%s\nAge= %d", s->name, s->address, s->age);
}