// Write a C program that takes two integers as command line arguments and performs the
//expression given below:
// c= a3 + b2 + 3ab
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
    if(argc != 3)
    {
        printf("Only 2 numbers are required\n");
        return 1;
    }

    // Converting argument to integer
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    int c = (a*a*a) + (b*b) + (3*(a*b));

    printf("\nThe result of the expression c= a3 + b2 + 3ab is %d", c);

    return 0;
}