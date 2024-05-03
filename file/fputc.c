#include<stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("1.txt", "w");

    fputc('B', fp);

    fclose(fp);
    return 0;
}