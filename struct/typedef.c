#include<stdio.h>
#include <string.h>

typedef struct student{
    int roll;
    char name[50];
    float cgpa;
} stu;

int main()
{
    //struct student s1;
    stu s1;

    printf("Enter your roll no.: ");
    scanf("%d", &s1.roll);
    printf("Enter your name: ");    // strcpy(s1.name, "niomi");
    scanf("%s", s1.name);
    printf("Enter your cgpa: ");
    scanf("%f", &s1.cgpa);

    printf("Roll no: %d\n", s1.roll);
    printf("Name: %s\n", s1.name);
    printf("Cgpa: %.2f\n", s1.cgpa);
    
    return 0;
}