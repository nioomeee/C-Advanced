//for 32 bit int variable , increment by 2 bytes but for 64 = 4 bytes
#include<stdio.h>

int main()
{
    int n = 50;
    int *p;
    p = &n;
    printf("\nAddress: %u",p);
    p++;
    printf("\nAfter increment: %u", p);
    return 0;
}