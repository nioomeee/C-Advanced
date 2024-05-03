// Define structure student to store roll no, name, course, gender. Get input from the user and
// display the same
#include<stdio.h>
#include<stdlib.h>


// Structure declaration
struct student 
{
    int rollno;
    char name[15];
    char course[30];
    char gender;
};


int main()
{
    struct student s[10]; //Array of structure
    int n;

    printf("Enter the number of students you want to print the details");
    scanf("%d", &n); //Asking number of students

    //Taking input from the user

    for(int i = 0; i < n; i ++)
    {
        printf("\nFor student %d\n", i+1);

        printf("\nEnter the roll number: ");
        scanf("%d", &s[i].rollno);

        printf("\nEnter the name: ");
        scanf("%s", s[i].name);

        printf("\nEnter the course: ");
        scanf("%s", s[i].course);

        printf("\nEnter the gender: ");
        scanf("%c", &s[i].gender);
    }

    printf("\nPrinting the information of %d student(s)\n"); //Printing the information of students

    //Printing the information of students

    for(int i = 0; i < n; i ++)
    {
        printf("\nFor student %d\n", i+1);

        printf("\nThe roll number: %d", s[i].rollno);

        printf("\nThe name: %s", s[i].name);

        printf("\nThe course: %s", s[i].course);

        printf("\nThe gender: ", s[i].gender);
    }
    return 0;
}