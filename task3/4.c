#include<stdio.h>
#include<string.h>

int main()
{
    FILE *fp;
    char string1[400], string2[200];
    fp = fopen("demo.txt", "r");
    if(fp == NULL)
    {
        perror("Error opening demo.txt");
        return 1;
    }
    fgets(string1, 200, fp);

    fclose(fp);

    fp = fopen("file.txt", "r");
    if(fp == NULL)
    {
        perror("Error opening file.txt");
        return 1;
    }
    fgets(string2, 200, fp);

    fclose(fp);

    printf("\nThe content from 1st file: %s", string1);
    printf("\nThe content from the 2nd file: %s", string2);


    fp = fopen("new.txt", "w+");
    if(fp == NULL)
    {
        perror("File not found.");
        return 1;
    }
    else
    {
        strcat(string1, string2);
        printf("Concatenated string: %s", string1);
        fputs(string1, fp);
    }

    return 0;
}