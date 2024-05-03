#include<stdio.h>

int largestElement(int* array, int* n);

int main()
{
    int array[20], n, i;
    printf("Enter the number of elements you want in the array: ");
    scanf("%d", &n);

    for(i = 0; i < n; i ++)
    {
        printf("a[%d]: ", i);
        scanf("%d", &array[i]);
    }

    largestElement(array, &n);
    return 0;
}

int largestElement(int* array, int* n)
{
    int max, i;
    max = *array;
    for(i = 1; i < (*n); i ++)
    {
        if(array[i] > max)
        {
            max = array[i];
        }
    }
    printf("\nThe largest element in the array is: %d\n", max);
    return 0;

}

