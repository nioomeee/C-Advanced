#include<stdio.h>

int main()
{
    int x[2], sum = 0;
    int *p;
    p = x;//assigning the base address
    printf("\nEnter number: ");

    for (int i = 0; i < 2; i++)
    {
        scanf("%d", (p + i));
        sum +=*(p+i);//p+i equals x[i]

    }
    printf("\nSum: %d", sum);    

    return 0;
}