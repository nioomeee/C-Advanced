#include<stdio.h>
#include <string.h>

struct address{
    int house_no;
    int block;
    char city[50];
    char state[50];
};

void printAddress(struct address add)
{
    for(int i=1; i < 6; i++)
    {
        printf("Address of %d person: %d, %d, %s, %s", i, add.house_no, add.block, add.city, add.state);
    }
}

int main()
{
    struct address adds[5];

    //input
    for(int i=1; i < 6; i++)
    {
        printf("Enter info for %d person: \n", i);
        printf("House no: ");
        scanf("%d", &adds[i].house_no);
        printf("\nBlock no: ");
        scanf("%d", &adds[i].block);
        printf("\nCity: ");
        scanf("%s", adds[i].city);
        printf("\nState: ");
        scanf("%s", adds[i].state);
    }

    printAddress(adds[0]);
    return 0;
}