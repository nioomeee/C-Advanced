#include<stdio.h>
#include<string.h>

int main()
{
    char s[50];  //declaring the string

    printf("\nEnter the string: ");  //taking the string from the user
    gets(s);

    printf("\nThe string you entered is: ");
    puts(s);   

    return 0;
}