#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    fp=fopen("Amitesh.txt","r");
    while ((ch=fgetc(fp))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(fp);
}