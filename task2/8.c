#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    char string[200];
    char ch, maxc;
    char maxn  = 0;
    int i, length;
    int array[256] = {0};

    //Entering the string 
    printf("\nEnter the string: ");
    gets(string);

    length = strlen(string); //calculating the length of the string

    //Calculating the frequency of each character in the string
    for(i = 0; i < length; i ++)
    {
        array[(int)string[i]]++;
    }

    //Finding the maximum occuring character
    for( i = 0; i < 256; i ++)
    {
        if(array[i] > 0 && array[i] > maxn)
        {
            maxn = array[i];
            maxc = (char)i;
        }
    }

    //printing the result
    printf("\nThe maximum occuring character is: %c and it appears %d times", maxc, maxn);
    
    return 0;
}