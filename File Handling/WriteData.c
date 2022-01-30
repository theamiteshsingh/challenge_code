#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fp;
    fp=fopen("File1.txt","w");   //opening file
    fprintf(fp, "Hello my name is amitesh singh...\n"); //write data into file
    fclose(fp);    //closing file
}