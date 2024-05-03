#include<stdio.h>
#include<string.h>

struct Courses
{
    char Website[50];
    char Subject[50];
    int Price;
};

int main()
{
    struct Courses C;

    //iinitiallizaltion
    strcpy(C.Website,"www.moodle.com");
    strcpy(C.Subject, "The C programming Language");
    C.Price=250;

    //print
    printf("WEbsite: %s\n", C.Website);
    printf("Book Author: %s\n", C.Subject);
    printf("Book Price: %d\n", C.Price);
    

    return 0;
}