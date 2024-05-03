#include<stdio.h>

int main()
{
    int i, j, r, c, sum;
    int a[100][100];

    printf("\nEnter the number of rows: ");
    scanf("%d", &r);

    printf("\nEnter the number of columns: ");
    scanf("%d", &c);

    for(i = 0; i < r; i ++)
    {
        for(j  = 0; j < c; j ++)
        {
            printf("\nA[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < r; i ++)
    {
        for(j = 0; j < c; j ++)
        {
            sum = 0;
            sum = sum+a[i][j];
        }
        printf("\nThe sum of row%d is: %d", i, sum);
    }
    return 0;
}