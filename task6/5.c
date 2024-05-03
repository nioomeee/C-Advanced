// Define structure student to store roll no, name, course, gender. Get input from the user and
// display the same for 5 students.
#include<stdio.h>

struct student
{
    int rollno;
    char name[15];
    char course[15];
    char gender;
};

int main()
{
    struct student s[5];
    int i;
    
    for(i=0;i<5;i++)
    {
        printf("Enter information of student %d\n", i+1);
        printf("Enter rollno: ");
        scanf("%d", &s[i].rollno);
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter course: ");
        scanf("%s", s[i].course);
        printf("Enter gender: ");
        scanf(" %c", &s[i].gender);
        printf("\n");
    }
    printf("\nPrinting information---------\n");

    for(i=0;i<5;i++)
    {
        printf("Information of student %d\n", i+1);
        printf("Rollno: %d\n", s[i].rollno);
        printf("Name: %s\n", s[i].name);
        printf("Course: %s\n", s[i].course);
        printf("Gender: %c\n", s[i].gender);
        printf("\n");
    }
    
    return 0;
}