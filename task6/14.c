// Define the union to store employee data and display the same
#include<stdio.h>
union employee
{
    int id;
    char name[20];
    char department[20];
    float salary;
};

int main()
{
    union employee emp;
    
    // Taking the data


    printf("Enter employee id: ");
    scanf("%d", &emp.id);

    printf("Enter employee name: ");
    scanf("%s", emp.name);

    printf("Enter employee department: ");
    scanf("%s", emp.department);

    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);

    // Displaying the data

    printf("Employee id: %d\n", emp.id);

    printf("Employee name: %s\n", emp.name);

    printf("Employee department: %s\n", emp.department);

    printf("Employee salary: %.2f\n", emp.salary);

    return 0;
}