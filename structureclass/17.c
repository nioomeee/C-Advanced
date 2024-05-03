//passing structure to function
#include<stdio.h>
struct address
{
    char city[20];
    int pin;
    char phone[11];
};

struct employee
{
    char name[20];
    struct address add;
};
void display(struct employee);
int main()
{
    struct employee emp;
    printf("\nEnter employee info: ");
    scanf("%s %s %d %s", emp.name, emp.add.city, &emp.add.pin, emp.add.phone);
    display(emp);
    return 0;
}

void display(struct employee emp)
{
    printf("Printing the result...\n ");
    printf("%s %s %d %s", emp.name, emp.add.city, emp.add.pin, emp.add.phone);
}