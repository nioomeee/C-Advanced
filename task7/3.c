// Write a C program that dynamically allocates an array of integers using malloc based on user 
// input for the size. Also modify it with th help of realloc for 2 more items.Display the entered 
// array and free the allocated memory
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *arr;
    int i, n, j;

    printf("Enter the size of the array: ");
    scanf("%d", &n);
    arr = (int *)calloc(n, sizeof(int));

    for(i = 0; i < n; i ++)
    {
        printf("A[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Re-enter another size for the array: ");
    scanf("%d", &j);

    arr =(int*) realloc(j, sizeof(int));

    for(i = n-1; i < j; i ++)
    {
        printf("A[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("The array is: \n");

    for(i = n-1; i < n; i ++)
    {
        printf("A[%d]: %d", arr[i], i);
    }

    return 0;
}