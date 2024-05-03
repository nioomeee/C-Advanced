//embedded nezted structure
#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[20];
    struct Date
    {
        int dd; 
        int mm;
        int yyyy;
    }doj;
}e1;

int main()
{
    //storimng employee info
    e1.id = 101;
    strcpy(e1.name,"Riyan Jaiswal");//copying string 
    e1.doj.dd=10;
    e1.doj.mm=11;
    e1.doj.yyyy=2014;

    //printing first employee info
    printf("Employee id: %d\n", e1.id);
    return 0;
}