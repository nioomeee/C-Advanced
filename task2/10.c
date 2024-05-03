#include<stdio.h>
#include<string.h>

int main()
{
    char string[100];

    printf("\nEnter the string: ");
    gets(string);

    for(int i = 0; i < strlen(string); i ++)
    {
        if(string[i] == 'e'|| string[i] == 'a' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u')
        string[i]= toupper(string[i]);
    }

    printf("\nThe new string is: %s", string);
    
    return 0;
}