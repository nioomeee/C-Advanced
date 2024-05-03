//C pointer address
//for 32-bit variable, it will add 2* number
//for 64,                          4* number

#include<stdio.h>

int main()
{
    int n = 50;
    int *p;
    p = &n;
    printf("Address of p: %u\n", p);
    p = p+3;
    printf("After adding 3: %u", p);
    
    return 0;
}