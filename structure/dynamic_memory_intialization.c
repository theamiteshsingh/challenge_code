#include<stdio.h>
#include<string.h>
struct student
{
    char *name;
    char *address;
    int age;
};
int main()
{
    struct student s;
    printf("Enter stdent name:::");
    gets(s.name);
    printf("Enter adress:::");
    gets(s.address);
    s.age=24;
    printf("Student name: %s\n Adress=%s\n Age= %d",s.name,s.address,s.age);
}