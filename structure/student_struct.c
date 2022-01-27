#include<stdio.h>
#include<string.h>
struct student
{
    char name[20];
    char adress[20];
    int age;
};
int main()
{
    struct student s;
    strcpy(s.name, "Amitesh");
    strcpy(s.adress, "korba");
    s.age, 24;
    printf("student name=%s \n Adress=%s\n age=%d",s.name,s.adress,s.age);
}