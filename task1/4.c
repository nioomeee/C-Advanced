#include<stdio.h>

int main()
{
    int i, j, n, temp;
    int a[100][100];
    printf("\nEnter the number of rows and columns: ");
    scanf("%d", &n);
    

    for(i = 0; i < n; i ++)
    {
        for(j = 0; j < n; j ++)
        {
            printf("\nA[%d][%d]: ", i,j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nThe matrix you've entered is: \n");

    for(i = 0; i < n; i ++)
    {
        for(j = 0; j < n; j ++)
        {
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < n; i ++)
    {
        for(j = i+1; j < n; j ++)
        {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }

    printf("\nThe transpose of matrix is: \n");

    for(i = 0; i < n; i ++)
    {
        for(j = 0; j < n; j ++)
        {
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }   

    return 0;
}