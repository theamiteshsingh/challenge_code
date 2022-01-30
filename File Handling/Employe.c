#include <stdio.h>
int main()
{
    FILE *fp;
    int id;
    char name[30];
    int salary;
    fp = fopen("Emp.txt", "w");
    if (fp == NULL)
    {
        printf("File doesnot exist!!");
    }
    printf("Enter the id:::\n");
    scanf("%d", &id);
    fprintf(fp, "id= %d\n", id);
    printf("Enter the name:::\n");
    scanf("%s", &name);
    fprintf(fp, "Name= %s\n", name);
    printf("Enter the Salary:::\n");
    scanf("%d", &salary);
    fprintf(fp, "Salary= %d\n", salary);
    printf(fp,"ID=%d Name=%s Salary=%d",id,name,salary);
    printf("Records saved successfully!!!!!");
    fclose(fp);
}