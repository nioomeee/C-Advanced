#include<stdio.h>

int main()
{
    int a= 10;
    void *ptr = &a;
    printf("%d", *(int*)ptr);
    //%f,*(float*)ptr
    return 0;
}