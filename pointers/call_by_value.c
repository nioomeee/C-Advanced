#include<stdio.h>
void address(int n);

int main()
{
    int n  = 4;
    printf("Address of n: %p", &n);
    address(n);
    return 0;
}
void address(int n)
{
    printf("\nAddress here: %p", &n);
}
