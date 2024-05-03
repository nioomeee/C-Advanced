//WAP to read integers into an array and reversing them using pointers
#include<stdio.h>
void revArray(int* n, int* array);

int main()
{
    int array[20], n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    revArray(&n, array);

    
    return 0;
}
void revArray(int* n, int* array)
{
    int i;

    for(i = 0; i < (*n); i ++)
    {
        printf("Array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    printf("\nReversing the array...");
    
    for(i = (*n)-1; i >= 0; i--)
    {
        printf("\nA[%d]: %d", i, array[i]);
    }
}