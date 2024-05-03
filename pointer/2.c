#include<stdio.h>

int main()
{
    int a, b, sum;
    int *p, *q;
    printf("1st number: ");
    scanf("%d", &a);
    printf("\n2nd number: ");
    scanf("%d", &b);

    p = &a;
    q = &b;

    sum  = *p + *q;
    printf("\nThe sum of the numbers: %d", sum);
    return 0;
}