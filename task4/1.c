//Average using pointers 
#include<stdio.h>

int main()
{
   int n, i, sum =0, avg = 0;
   int* ptr;
   int numbers[10];
   
   printf("Enter the number of elements: ");
   scanf("%d", &n);
   
   for(i = 0; i < n; i ++)
   {
      printf("\n%d: ", i+1);
      scanf("%d", &numbers[i]);
   }
   printf("\n");

   ptr = numbers;

   for ( i = 0; i < n; i++)
   {
      sum+=*(ptr+i);
   }

   printf("\nSum: %d", sum);

   avg = sum / n;
   printf("\nAverage: %d", avg);
   return 0;
}