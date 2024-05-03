#include<stdio.h>
#include<string.h>

int main()
{
    FILE *fp;
    char newSurname[100];
    char fullName[100];
    fp = fopen("niomi.txt", "a"); 
    if(fp == NULL)
    {
        perror("Error opening the file niomi.txt");
        return 1;
    }  

    printf("\nEnter the new Surname: ");
    scanf("%s", newSurname);

    fgets(fullName, sizeof(fullName), fp);
    fclose(fp);

    fp = fopen("niomi.txt", "w");

    return 0;
}