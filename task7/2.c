// Write a C program that dynamically allocates an array of integers using calloc based on user 
// input for the size. Display the entered array and free the allocated memory.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *arr;
    int n;

    printf("Enter the size of array you want: ");
    scanf("%d", &n);

    arr = (int *)calloc(n, sizeof(int));

    printf("Enter the elements of the array: ");
    for(int i =0; i < n; i ++)
    {
        printf("\n%d: ",i+1);
        scanf("%d", &arr[i]);
    }

    printf("\nPrinting the array..\n ");

    for(int i = 0; i < n; i ++)
    {
        printf("\n%d: %d",i+1, arr[i]);
    }
    return 0;
}