#include<stdio.h>

void increment(int* n);
void decrement(int* n);

int main()
{
    int n;
    char op;
    printf("\nEnter a number: ");
    scanf("%d", &n);

    printf("\nFor increment --> +\tFor decrement --> -: ");
    scanf(" %c", &op);
    if(op == '+')
    {
        increment(&n);
    }
    else if(op == '-')
    {
        decrement(&n);
    }
    else
    {
        printf("\nEnter correct operation");
        return -1;
    }

    if(op == '+')
    {
        printf("\nIncremented number is: %d", n);
    }
    else
    {
        printf("\nDecremented number is: %d", n);
    }
    return 0;
}
void increment(int* n)
{
    (*n)++;
}

void decrement(int* n)
{
    (*n)--;
}

