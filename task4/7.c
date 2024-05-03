#include<stdio.h>
int inputInfo(int* rollno, char* gender, float* marks);
int displayInfo(int rollno, char gender, float marks);

int main()
{
    int rollno;
    char gender;
    float marks;

    inputInfo(&rollno, &gender, &marks);

    displayInfo(rollno,  gender, marks);

    return 0;
}
int inputInfo(int* rollno, char* gender, float* marks)
{
    printf("\nEnter your rollno: ");
    scanf("%d", rollno);

    printf("\nEnter your gender M or F: ");
    scanf(" %c", gender);

    printf("\nEnter your marks: ");
    scanf("%f", marks);
}

int displayInfo(int rollno, char gender, float marks)
{
    printf("\nYour rollno are: %d", rollno);
    printf("\nYour Gender are: %d", gender);
    printf("\nYour Mark are:: %.2f", marks);
    
}

