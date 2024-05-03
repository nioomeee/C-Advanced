#include<stdio.h>
#include<string.h>

int main()
{
    char string[100];
    int i = 0, length;

    //taking the string from the user
    printf("\nEnter the string: ");
    gets(string);

    length = strlen(string);  //calculating the length of the string

    while(i < length)
    {
        printf("\n%c", string[i]);
        i++;
    }
    
    return 0;
}