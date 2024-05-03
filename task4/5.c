#include<stdio.h>

void OddEven(int* n);

int main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    OddEven(&n);
    return 0;
}

void OddEven(int* n)
{
    if((*n) % 2 == 0)
    {
        printf("%d is an even number", *n);
    }
    else if((*n) % 2 != 0)
    {
        printf("%d is an odd number", *n);
    }
    else 
    {
        printf("Please enter proper number");
        return -1;
    }
}