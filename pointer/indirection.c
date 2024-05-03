//indirection operator to print the value of pointer 
#include<stdio.h>

int main()
{
    int n = 100;
    int *p;
    p = &n;//storres the adreess of the number variable
    printf("Adrress: %u", p);
    printf("\nvalue: %d", *p);
    return 0;
}