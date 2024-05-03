#include<stdio.h>
int operation(int a, int b, int* ans, char* op);
int main()
{
    int a, b, ans;
    char op;

    printf("Enter 1st number: ");
    scanf("%d", &a);

    printf("Enter 2nd number: ");
    scanf("%d", &b);

    printf("Multiplication --> *\t Division --> /: ");
    scanf(" %c", &op);

    operation(a, b, &ans, &op);

    printf("%d %c %d = %d", a, op, b, ans);

    return 0;
}

int operation(int a, int b, int* ans, char* op)
{
    if((*op) == '*')
    {
        *ans = a * b;
    }
    else if((*op) == '/')
    {
        if(b == 0)
        {
            printf("Division  by 0 is not allowed\n");
            return -1;
        }
        else
        {
            *ans = a / b;
        }
    }
    else
    {
        printf("Please enter correct operation");
        return -1;
    }
    
}
