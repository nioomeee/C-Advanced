#include<stdio.h>

int main()
{
    char str[200];
    FILE *fp;

    fp = fopen("1.txt", "r");

    fgets(str, 200, fp);

    printf("%s", str);
    return 0;
}