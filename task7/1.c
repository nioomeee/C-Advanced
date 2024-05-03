// Write a C program that dynamically allocates an array of integers using malloc based on user 
// input for the size. Display the entered array and free the allocated memory

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *a;
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    a = (int*)malloc(n*sizeof(int));

    // Taking value from the user
    for(int i = 0; i < n ; i ++)
    {
        printf("A[%d]: ", i);
        scanf("%d", &a[i]);
    }

    // Printing value from the user
    for(int i = 0; i < n ; i ++)
    {
        printf("\nA[%d]: %d",i, a[i]);
    }
    free(a);
    
    return 0;
}