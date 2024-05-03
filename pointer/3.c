#include<stdio.h>

int main()
{
    int a = 10;
    int *p;

    printf("Pounter example program: post increment, pre increment, post decremenet, pre decrement ");
    p = &a;
    (*p)++;
    printf("\nPost Increment: %d", a);

    ++(*p);
    printf("\npre Increment: %d", a);

    (*p)--;
    printf("\nPost decrement %d", a);

    --(*p);
    printf("\nPre Decrement: %d", a);

    return 0;
}