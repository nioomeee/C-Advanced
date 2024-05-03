#include<stdio.h>

int main()
{
    int r, c, i , j;
    int a[50][50], b[50][50], sum[50][50], sub[50][50];
    
    printf("\nEnter the number of rows: ");
    scanf("%d", &r);

    printf("\nEnter the columns: ");
    scanf("%d", &c);

    printf("\n***************************************************************\n");

    printf("For 1st matrix: ");
    for(i = 0; i < r; i ++)
    {
        for(j = 0; j < c; j ++)
        {
            printf("\nA[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nThe first matrix you've entered is: \n");

    for(i = 0; i < r; i ++)
    {
        for(j = 0; j < c; j ++)
        {
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }

    printf("\n***************************************************************\n");

    printf("For 2nd matrix: ");
    for(i = 0; i < r; i ++)
    {
        for(j = 0; j < c; j ++)
        {
            printf("\nB[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("\nThe second matrix you've entered is: \n");

    for(i = 0; i < r; i ++)
    {
        for(j = 0; j < c; j ++)
        {
            printf("\t%d", b[i][j]);
        }
        printf("\n");
    }

    printf("\n***************************************************************\n");
   
   for(i = 0; i < r; i ++)
   {
        for(j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
   }

   printf("The sum of 2 matrices is: \n");

    for(i = 0; i < r; i ++)
   {
        for(j = 0; j < c; j++)
        {
            printf("\t%d", sum[i][j]);
        }
        printf("\n");
   }

    printf("\n***************************************************************\n");

    printf("\nThe subtraction of 2 matrices is: \n");

    for(i = 0; i < r; i ++)
    {
        for(j = 0; j  < c; j ++)
        {
            printf("\t%d", a[i][j] - b[i][j]);
        }
        printf("\n");
    }

    return 0;
}