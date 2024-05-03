#include<stdio.h>

int main()
{
    int r, c, i, j, a[100][100], count=0, product=1;
    printf("\nEnter the number of rows: ");
    scanf("%d", &r);

    printf("\nEnter the number of columns: ");
    scanf("%d", &c);

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("\nA[%d][%d]: ",i,j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nThe matrix you've entered is: \n");

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }

    for ( i = 0; i < r; i++)
    {
       for ( j = 0; j < c; j++)
       {

        count = count+ a[i][j];

       }
       
    }

    printf("\nThe sum of all elements of matrix is: %d",count);

    for ( i = 0; i < r; i++)
    {
       for ( j = 0; j < c; j++)
       {

        product = product*a[i][j];

       }
       
    }

    printf("\nThe product of all the elements is: %d", product);

    
    
    return 0;
}