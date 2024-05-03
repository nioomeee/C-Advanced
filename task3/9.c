#include<stdio.h>

int main()
{
    FILE *fp;
    char string[200];
    fp = fopen("file.txt", "r");
    if(fp == NULL)
    {
        perror("Unable to open file.txt");
        return 1;
    }
    fgets(string, 200, fp);
    fclose(fp);
    fp = fopen("new.txt", "a+");
    fputs(string, fp);
    fclose(fp);
    return 0;
}