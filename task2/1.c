#include<stdio.h>
#include<ctype.h>

int main()
{
    char ch;
    
    //taking a letter from the user
    printf("\nEnter a character: ");
    scanf("%c", &ch);

    //checking whether alphabetic
    if(isalpha(ch))
    {
        printf("\nThe character entered is an alphabetic character.");
        
        //checking whether the alphabet is uppercase or lowercase
        if(isupper(ch))
        {
            printf("\nThe character entered is an uppercase character.");
        }
        else
        {
            printf("\nThe character entered is lowercase character.");
        }
    }
    else if(isdigit(ch)) //checking whether the character is an alphanumeric character
    {
        printf("\nThe character entered is an digit.");
    }
    else if(isalnum(ch))  //checking if the character is a digit
    {
        printf("\nThe character entered is a alphanumeric character.");
    }
    else if(isspace(ch))  //checeking if the character entered is a white space character
    {
        printf("\nThe character entered is a white space character.");
    }
    else  //if none of the conditions is fulfilled
    {
        printf("\nError: Please enter a valid character");
    }
    
    return 0;
}