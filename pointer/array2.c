#include<stdio.h>

int main()
{
    int a[]={1,2,3,4,5};
    //int *a = &a;
    printf("%u\n", a);//address
    printf("%u\n",&a[0]);//address
    printf("%d\n", a[0]);//value 
    printf("%d\n",*a);   // value of a[0]
    return 0;
}