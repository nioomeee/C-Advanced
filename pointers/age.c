#include<stdio.h>

int main()
{
    int age = 17;
    int* ptr = &age;
    int _age = &ptr;

    printf("%d\n", *ptr);
    printf("%d\n", *(&ptr));
    printf("%d\n", *ptr);
    printf("%d\n", *(&age));

    return 0;
}