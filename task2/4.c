#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char string[100];
    char ch;
    int length, i = 0, count = 0;

    //Taking input string
    printf("\nEnter the string: ");
    gets(string);

    //Taking the character to find it's frequency
    printf("\nEnter the character to find it's frequency: ");
    scanf("%c", &ch);

    length = strlen(string); //calculating the length of the string

    while(i < length)
    {
        if(ch == string[i])
        {
            count++;
        }
        i++;
    }
    
    printf("\nThe %c character appears %d times.", ch, count);

    return 0;
}