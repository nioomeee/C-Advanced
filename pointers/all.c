#include<stdio.h>
int doWork(int a, int b, int* sum, int* prod, int* avg);
int main()
{
    int a, b, sum, prod, avg;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("\nEnter b: ");
    scanf("%d", &b);

    doWork(a, b, &sum, &prod, &avg);

    printf("\nSum of %d and %d is: %d", a, b, sum);
    printf("\nProd of %d and %d is: %d", a, b, prod);
    printf("\nAvg of %d and %d is: %d", a, b, avg);

    return 0;
}

int doWork(int a, int b, int* sum, int* prod, int* avg)
{
    *prod = a*b;
    *sum = a+b;
    *avg = (*sum) / 2;
}
