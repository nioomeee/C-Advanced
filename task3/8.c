#include<stdio.h>
#include<string.h>

int main()
{
    FILE *fp;
    int length;
    char string[100];
    fp = fopen("file.txt", "r");
    fgets(string, 100, fp);

    length = strlen(string);

    fclose(fp);

    printf("the number of characters is: %d", length);
    return 0;
}