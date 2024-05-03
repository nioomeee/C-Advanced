// Write a C program to calculate the maximum of three numbers entered by the user. Take the
// input at execution time on terminal using command line argument and display the greatest
// among them on terminal.
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    // argc = argument count = no. of command line arguments
    // argv = argument vector = array of strings containing arguments

    printf("This program calculates the maximum of 3 numbers entered by the user.\n");

    // Checking if the no. of arguments is not equal to 4 i.e. program name + nos.
    if(argc != 4)
    {
        printf("Usage is: %s num1 num2 num3\n", argv[0]); //argv[0] means the name of the program is the at the first index of the array of strings
        return 1;
    }

    // Converting arguments to integers
    int a = atoi(argv[1]); // first num
    int b = atoi(argv[2]); // second num
    int c = atoi(argv[3]); // third num

    int max = a;
    if(b > max)
    {
        max = b;
    }
    if(c > max)
    {
        max = c;
    }

    printf("\nThe maximum of %d %d %d is %d", a, b, c, max);
}