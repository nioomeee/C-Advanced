// #include<stdio.h>
// #include<ctype.h>

// int main()
// {
//     FILE *fp;
//     char ch;
//     int alpha= 0, num = 0, max;
//     fp = fopen("file.txt", "r");
//     while((ch = fgetc(fp))!=EOF)
//     {
//         if(isalpha(ch))
//         {
//             alpha++;
//         }

//         else if(isdigit(ch))
//         {
//             num++;
//         }
//     }

//     if(alpha > num)
//     {
//         printf("\nAlphabets");
//     }
//     else{
//         printf("\nNumbers");
//     }

//     return 0;
// }

#include <stdio.h>
#include  <ctype.h>
int main()
{
    int i;
    char ch;
    FILE *fp = fopen("file.txt","r");

    while ((ch = fgetc(fp))!=EOF)
    {
        if (isalpha(ch))
        {
            printf("It is an alphabet file");
            return 0;
        }
        else if(isdigit(ch))
        {
            printf("it is an number file");
            return 0;
        }
    }
    
    
    printf("\n");
    return 0;
}