//Write a Program to find the given number from user is positive or negative using pointer

#include<stdio.h>
void find(int* n);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    find(&n);

    return 0;
}

void find(int* n)
{
    if((*n) > 0)
    {
        printf("%d entered is positive", (*n));
        if((*n) == 7)
        {
            printf("\nThala for a reason");
        }
    }
    else if((*n)<0)
    {
        printf("\n%d is negative", (*n));
    }
    else if((*n) == 0)
    {
        printf("\n%d is null", *n);
    }
    else
    {
        printf("enter a proper number");
    }
}