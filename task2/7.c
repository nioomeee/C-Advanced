#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char string[200];
    int i, length, vowel = 0, consonant = 0;

    //taking the input string from the user
    printf("\nEnter the string: ");
    gets(string);

    length = strlen(string); //calculating the length of the string

    for(i = 0; i < length; i ++)
    {
        if(string[i] == 'I' || string[i] == 'i' || string[i] == 'A' || string[i] == 'a' || string[i] == 'E' || string[i] == 'e' || string[i] == 'O' || string[i] == 'o' || string[i] == 'U' || string[i] == 'u')
        {
            vowel++;
        }
        else if(string[i] != 'I' || string[i] != 'i' || string[i] != 'A' || string[i] != 'a' || string[i] != 'E' || string[i] != 'e' || string[i] != 'O' || string[i] != 'o' || string[i] != 'U' || string[i] != 'u')
        {
            if(isalpha(string[i]))
            {
                consonant++;
            }
        }
    }

    printf("\nThe number of vowels is: %d", vowel);

    printf("\nThe number of consonants is: %d", consonant);

    
    return 0;
}