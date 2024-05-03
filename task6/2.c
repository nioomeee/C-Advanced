// Define structure employee to store emp id, emp name, emp department, emp designation, get the
// input from user and display the same
#include<stdio.h>
#include<stdlib.h>

struct employee{
    int emp_id;
    char emp_name[20];
    char emp_department[20];
    char emp_designation[20];
};

int main()
{
    struct employee emp;
    
    printf("Enter your id: ");
    scanf("%d", &emp.emp_id);

    printf("\nEnter your name: ");
    scanf("%s", emp.emp_name);

    printf("\nEnter your department: ");
    scanf("%s", emp.emp_department);

    printf("\nEnter your designation: ");
    scanf("%s", emp.emp_designation);

    printf("\n\n\nPrinting the information... \n");
    printf("ID: %d\n", emp.emp_id);
    printf("Name: %s\n", emp.emp_name);
    printf("Department: %s\n", emp.emp_department);
    printf("Designation: %s\n\n", emp.emp_designation);

    return 0;
}