#include<stdio.h>
#include<ctype.h>

int main()
{
    FILE *fp;
    char character;

    fp = fopen("file.txt", "r");
    if(fp == NULL)
    {
        perror("Error the file \"file.txt\" couldn't be opened");
        return 1;
    }

    while((character = fgetc(fp))!=EOF)
    {
        if(islower(character))
        {
            printf("%c", toupper(character));
        }
        else
        {
            printf("%c", tolower(character));
        }
    }

    return 0;
}