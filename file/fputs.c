#include<stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("1.txt", "w");

    fputs("Hello Hi what are?", fp);
    fclose(fp);
    return 0;
}