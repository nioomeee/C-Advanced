#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, i, *ptr;
    int sum = 0;

    printf("\nEnter the number of elemnts: ");
    scanf("%d", &n);

    ptr = (int*)malloc(n * sizeof(int));

    if(ptr==NULL)
    {
        printf("\nError: Mwemoey not allocated");
        exit(0);
    }

    printf("\nEnter elements: ");
    for(i = 0; i<n; i++)
    {
        scan
    }

    return 0;
}