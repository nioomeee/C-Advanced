#include<stdio.h>

int main()
{
    int length=0;
    char string[100];  //declaring the string

    printf("\nEnter the string: "); //taking the string from the user
    gets(string);

    //Calculating the length of the string
    while(string[length] !='\0')  
    {
        length++;
    }

    //printing the length
    printf("\nThe length of the string: %d", length);
    
    return 0;
}