#include<stdio.h>

int main()
{
    int i, j, r1, c1, r2, c2;
    int a[50][50], b[50][50];
    
    printf("Enter the number of rows for 1st matrix: ");
    scanf("%d", &r1);

    printf("Enter the number of columns for 1st matrix: ");
    scanf("%d", &c1);

    for(i = 0; i < r1; i ++)
    {
        for(j = 0; j < c1; j ++)
        {
            printf("\n A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nThe matrix you've entered is: \n");

    for(i = 0; i < r1; i ++)
    {
        for(j = 0; j < c1; j ++)
        {
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }

    printf("Enter the number of rows for 2nd matrix: ");
    scanf("%d", &r2);

    printf("Enter the number of columns for 2nd matrix: ");
    scanf("%d", &c2);

    for(i = 0; i < r2; i ++)
    {
        for(j = 0; j < c2; j ++)
        {
            printf("\n B[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("\nThe matrix you've entered is: \n");

    for(i = 0; i < r2; i ++)
    {
        for(j = 0; j < c2; j ++)
        {
            printf("\t%d", b[i][j]);
        }
        printf("\n");
    }

    printf("\nChecking whether the matrices are identical: \n");

    int identical = 1;

    if(r1 == r2 && c1 == c2)
    {
        
        for( i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j ++)
            {
                if(a[i][j] != b[i][j])
                {
                    identical = 0;
                    break;
                }
                if(!identical)
                {
                    break;
                }
            }
        }

        if(identical)
        {
            printf("\nThe 2 matrices are identical");
        }
        else
        {
            printf("\nThe 2 matrices aren't identical");
        }
    }

    else
    {
        printf("\nThe 2 matrices aren't identical");
    }
    



    return 0;
}