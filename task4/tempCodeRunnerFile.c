//largest element using pointers
#include<stdio.h>

int main()
{
    int numbers[10], count;
    int *pointer;

    printf("Enter the number of elements: ");
    scanf("%d", &count);

    for (int i = 0; i < count; i++)
    {
        printf("\n%d number: ", i);
        scanf("%d", &numbers[i]);
    }
    

    pointer = numbers;

    for (int i = 1; i < 3; i++)
    {
        if(*pointer < numbers[i])
        {
            pointer = numbers[i];
        }
        pointer++;
    }

    printf("\nLargest of the 3 numbers is: %d", *pointer);
      
    return 0;
}