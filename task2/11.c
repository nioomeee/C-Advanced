#include<stdio.h>
#include<string.h>

int main()
{
    char string1[200], string2[200];
    int compare;

    printf("\nEnter the 1st string: ");
    gets(string1);

    printf("\nEnter the 2nd string: ");
    gets(string2);

    compare = strcmp(string1, string2);

    if(compare == 0)
    {
        printf("\nBoth the strings are equal");
    }
    else if(compare < 0)
    {
        printf("\nString 2 is greater than string 1");
    }
    else
    {
        printf("\nString 1 is greater than String 2");
    }
    return 0;
}