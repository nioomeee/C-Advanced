// Write a C program that takes two integers as command line arguments and performs the
//  following operations:
// 1. Product of the two numbers.
// 2. Difference (subtract the second number from the first
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
    if(argc != 3)
    {
        printf("2 integers are required for the execution of this program");
        return 1;
    }

    // Converting arguments to integers
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    // 1. Product of the two numbers.  
    int c = a * b;
    printf("\nThe product of %d and %d = %d", a, b, c);

    c=0;

    // 2. Difference (subtract the second number from the first
    c = a - b;
    printf("\nDiiference of %d - %d = %d", a, b, c);
    return 0;
}