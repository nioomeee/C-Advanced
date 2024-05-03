#include<stdio.h>
#include <string.h>

struct student{
    int roll;
    char name[50];
    float cgpa;
};

int main()
{
    // struct student s1;
    struct student s1={46, "niomi", 9.2};

    printf("Enter your roll no.: ");
    scanf("%d", &s1.roll);
    printf("Enter your name: ");    // strcpy(s1.name, "niomi");
    scanf("%s", s1.name);
    printf("Enter your cgpa: ");
    scanf("%f", &s1.cgpa);

    struct student *ptr = &s1;

    printf("Roll no: %d\n", ptr->roll);
    printf("Name: %s\n", ptr->name);
    printf("Cgpa: %.2f\n", ptr->cgpa);
    
    return 0;
}