#include<stdio.h>

int main()
{
    int r1, c1, r2, c2, i, j, k;
    int a[50][50], b[50][50], result[50][50];
    
    //Entering the dimensions of the 1st matrix
    printf("\nEnter the number of rows for 1st matrix: ");
    scanf("%d", &r1);
    printf("\nEnter the number of columns for the 1st matrix: ");
    scanf("%d", &c1);

    //entering elements from the user
    for(i = 0; i < r1; i ++)
    {
        for(j = 0; j < c1; j ++)
        {
            printf("\nA[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    //Entering the dimensions of the 2nd matrix
    printf("\nEnter the number of rows for 2nd matrix: ");
    scanf("%d", &r2);
    printf("\nEnter the number of columns for the 2nd matrix: ");
    scanf("%d", &c2);

    //entering elements from the user
    for(i = 0; i < r2; i ++)
    {
        for(j = 0; j < c2; j ++)
        {
            printf("\nB[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    //checking to see if the multiplication is possible
    if(c1 != r2)
    {
        printf("\nError: The number of columns in 1st matrix should be equal to the number of rows of 2nd matrix");
        return 1;
    }

    //performing the multiplication of the matrices
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j ++)
        {
            result[i][j] = 0;
            for(k = 0; k < c1; k++)
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    //displaying the result
    printf("\nThe result is: \n");
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j ++)
        {
            printf("\t%d", result[i][j]);
        }
        printf("\n");
    }



    return 0;
}