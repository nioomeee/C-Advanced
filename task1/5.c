#include<stdio.h>

int main()
{
    int i, j, n, a[100][100];
    
    printf("\nEnter the number of rows and columns: ");
    scanf("%d", &n);

    for(i = 0; i < n; i ++)
    {
        for(j = 0; j <n; j ++)
        {
            printf("\nA[%d][%d]: ",i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nYou've entered the matrix: \n");

    for(i = 0; i < n; i ++)
    {
        for(j = 0; j <n; j ++)
        {
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }

    printf("\nThe diagonal elememts of the matrix are: \n");

    for(i = 0; i < n; i ++)
    {
        for(j = 0; j <n; j ++)
        {
            if(i == j)
            {
                printf("\t%d", a[i][j]);
            }
            else
            {
                printf("\t ");
            }
        }
        printf("\n");
    }



    return 0; 
}