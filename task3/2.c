#include<stdio.h>

int main()
{
    FILE *fp;
    char i, j;

    fp = fopen("demo.txt", "w");
    printf("Enter a number: ");
    scanf("%c", &i);
    fputc(i, fp);

    fclose(fp);

    fp = fopen("demo.txt", "r");
    j = fgetc(fp);

    printf("\n%c", j);

    return 0;
}