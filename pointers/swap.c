#include<stdio.h>

int swap(int a, int b);
int _swap(int* a, int* b);

int main()
{
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    swap(a,b);
    printf("a: %d\nb: %d\n", a, b);
    _swap(&a, &b);
    printf("a: %d\nb: %d\n", a, b);
    return 0;
}

int swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("The value of a: %d\nThe value of b: %d\n", a, b);
}

_swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
 
}

