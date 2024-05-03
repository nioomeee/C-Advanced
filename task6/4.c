// Define structure salary to store emp name, basic salary, hra, da, total salary. Get basic salary from
// user. Calculate hra as 25% and da as 10% of salary and total salary = basic+hra+da and display
// the same
#include<stdio.h>
struct salary
{
    char name[20];
    int bsalary;
};

int main()
{
    struct salary s[10];
    int n;
    int hra, da, tsalary;

    printf("Enter the number of employees: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("Enter the name of employee %d: ",i+1);
        scanf("%s",s[i].name);

        printf("Enter the basic salary of employee %d: ",i+1);
        scanf("%d",&s[i].bsalary);

        hra = s[i].bsalary*0.25;
        da = s[i].bsalary * 0.10;
        tsalary = s[i].bsalary + hra + da;
        printf("\nThe total salary of %s is %d",s[i].name,tsalary);

        hra = 0;
        da = 0;
        tsalary = 0;
    }


    return 0;
}