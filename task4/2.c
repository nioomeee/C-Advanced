//largest element using pointers
#include<stdio.h>

int main()
{
    int n, i, largest;
    int* ptr;
    int arr[10];

    printf("Enter the number of elements in array: ");
    scanf("%d", &n);

    for(i = 0; i < n; i ++)
    {
        printf("\n%d: ", i+1);
        scanf("%d", arr[i]);
    }

    ptr = arr;

    largest = *(ptr);

    for (i = 0; i < n; i++)
    {
        if(largest > *(ptr[i]));
    }
    
    return 0;
}