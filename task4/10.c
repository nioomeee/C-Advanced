#include<stdio.h>
#include<math.h>
#define PI 3.14

void CalculateArea(float* rad, float* area);

int main()
{
    float rad, area;
    printf("\nEnter the radius of the circle: ");
    scanf("%f", &rad);

    CalculateArea(&rad, &area);

    printf("The area of the circle is: %.2f", area);

    return 0;
}

void CalculateArea(float* rad, float* area)
{
    (*area) = PI * (*rad) * (*rad);
}