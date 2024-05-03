#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char ch;
    char string[200];
    int i, length;

    //taking input string from the user
    printf("\nEnter the string: ");
    gets(string);

    length = strlen(string); //storing the string size

    for(i = 0; i < length; i ++)
    {
        if(isalpha(string[i]))
        {
            if(isupper(string[i]))
            {
                string[i] = tolower(string[i]);
            }

            else if(islower(string[i]))
            {
                string[i] = toupper(string[i]);
            }
        }
        
    }
    
    printf("\nThe new string is: %s", string);
    return 0;
}