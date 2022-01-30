#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    char fname[20];
    printf("Enter file name you want to read::");
    scanf("%s",fname);
    fp=fopen(fname,"r");
    while(1)
    {
        ch=fgetc(fp);
        if (ch==EOF)
        {
            break;
        }
        printf("%c",ch);
    }
    fclose(fp);
}