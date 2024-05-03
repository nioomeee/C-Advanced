#include<stdio.h>

int main()
{
    int ch;
    FILE *fp;

    fp = fopen("new2.txt", "w");
    if(fp == NULL)
    {
        perror("Error finding the file new2.txt");
        return 1;
    }
    printf("\nEnter the character: ");
    scanf("%c", &ch);

    fputc(ch, fp);
    fclose(fp);

    fp = fopen("new2.txt", "r");
    if(fp == NULL)
    {
        perror("Error finding the file new2.txt");
        return 1;
    }
    else
    {
        printf("%c",ch= fgetc(fp));
    }

    return 0;
}