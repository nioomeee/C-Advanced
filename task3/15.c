#include<stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("niomi.txt", "r+");

    char b;
    fseek(fp, -5, SEEK_END);
    
    b = fgetc(fp);

    printf("%c", b);
    return 0;
}