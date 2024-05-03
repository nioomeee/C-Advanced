#include<stdio.h>

int main()
{
    FILE *fp;
    int i;
    fp = fopen("demo.txt", "w+");
    for(i = 0; i < 101; i ++)
    {
        fprintf(fp," %d\t", i);
    }
    return 0;
}