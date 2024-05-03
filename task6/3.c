// Define structure course to store course no, course name, course description. Get input from user
// and display the same
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// Defining structure

struct course
{
    int no;
    char name[20];
    char desc[50];
};

// Main function

int main()
{
    struct course c;
    char temp[50];

    // Taking input from the user
    printf("Course number: ");
    scanf("%d", &c.no);

    printf("\nCourse Name: ");
    scanf("%s", c.name);

    printf("\nCourse Description: ");
    scanf("%s", temp);

    strcpy(c.desc, temp);
    // Displaying the output

    printf("\nCourse number: %d", c.no);

    printf("\nCourse Name: %s", c.name);

    printf("\nCourse Description: %s\n\n", c.desc);

    return 0;
}