#include<stdio.h>

int main()
{
    int x, y, area, perimeter;
    int *px = &x;
    int *py = &y;

    printf("Enter the sides of the rectangle: ");
    scanf("%d %d", &x, &y);

    printf("\nx = %d \t y = %d", *px, *py);

    area  = (*px) * (*py);

    perimeter = 2 * (*px + *py);

    printf("\nArea: %d", area);
    printf("\nPerimeter: %d", perimeter);
    return 0;
}