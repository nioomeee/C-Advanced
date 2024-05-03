#include<stdio.h>
#include<string.h>

int main()
{
    FILE *fp;
    char c[100], ch[100];

    printf("Enter the string you want: ");
    gets(c);

    fp = fopen("1.txt", "w+");

    fwrite(c, strlen(c),1,  fp);

    rewind(fp);

    fread(ch, 100, 1, fp);

    printf("%s", ch);

    fclose(fp);


    return 0;
}