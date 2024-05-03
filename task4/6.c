#include<stdio.h>

int table(int* n, int *multiplier, int * result);
int main()
{
    int n, result, i = 1;
    printf("Enter the number to display table: ");
    scanf("%d", &n);
    table(&n, &i, &result);
    return 0;
}

int table(int* n, int *multiplier, int * result)
{

    if((*multiplier) > 10)
    {
        printf("\n*******************");
        return -1;
    }
    else
    {
        *result = (*n) * (*multiplier);
        printf("\n%d * %d = %d", *n, *multiplier, *result);

        (*multiplier)++;
        table(n, multiplier, result);
    }
}