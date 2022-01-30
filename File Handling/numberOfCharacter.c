#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp;
    int ch;
    char fname[20];
    int c = 0;
    printf("Enter file name to read contains:::");
    scanf("%s", &fname);
    fp = (fopen(fname, "r"));
    while (1)
    {
        ch = fgetc(fp);
        if (ch == EOF)
            break;
        c=c+1;
    }
    printf("Number of characters::%d", c);
    fclose(fp);
}