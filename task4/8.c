#include<stdio.h>
#include<ctype.h>

int check(char* c);

int main()
{
    char c;
    printf("\nEnter character or digit: ");
    scanf(" %c", &c);

    check(&c);

    return 0;
}

int check(char* c)
{
    if(isdigit(*c))
    {
        printf("\n%c is a digit", *c);
    }
    else if(isalpha(*c))
    {
        printf("\n%c is an alphabetic character", *c);
    }
    else
    {
        perror("\nDigit or character required");
    }
}
