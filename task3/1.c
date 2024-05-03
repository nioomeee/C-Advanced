#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    char string[100];

    fp = fopen("demo.txt", "r"); //opening the file in reading mode

    fgets(string, 100, fp);

    printf("\n%s", string);

    fclose(fp);
    return 0;
}