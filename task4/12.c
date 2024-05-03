//Write a program to calculate the square and cube of an entered number using pointer of a variable containing the entered number. 
#include<stdio.h>

int main()
{
    int n;
    int *ptr;
    
    printf("Enter the number: ");
    scanf("%d", &n);

    int temp = n;
    ptr = &n;

    *ptr = (*ptr) * (*ptr);
    printf("\nThe square of %d is %d", temp, *ptr);

    *ptr = temp * (*ptr);
    printf("\nThe cube of %d is %d", temp, *ptr);

    return 0;
}