// Write a C program to create a linear link list consisting of 10 nodes. Display all nodes at odd
//  position from the created link list.
// Sample Output:
// Link list: 35 40 80 60 70 30 52 41 80 25
// Nodes at odd position are: 35 80 70 52 80
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    int *next;
};

int main()
{   
    int i, count = 1;

    // Declaring the 10 nodes
    struct node *head = NULL;
    struct node *second = NULL;
    struct node *third = NULL;
    struct node *fourth = NULL;
    struct node *fifth = NULL;
    struct node *sixth = NULL;
    struct node *seventh = NULL;
    struct node *eighth = NULL;
    struct node *ninth = NULL;
    struct node *tenth = NULL;

    //Allocating the memory size
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));
    fifth = (struct node*)malloc(sizeof(struct node));
    sixth = (struct node*)malloc(sizeof(struct node));
    seventh = (struct node*)malloc(sizeof(struct node));
    eighth = (struct node*)malloc(sizeof(struct node));
    ninth = (struct node*)malloc(sizeof(struct node));
    tenth = (struct node*)malloc(sizeof(struct node));

    head -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;
    fifth -> next = sixth;
    sixth -> next = seventh;
    seventh -> next = eighth;
    eighth -> next = ninth;
    ninth -> next = tenth;
    tenth -> next = NULL;
    
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));

    temp = head;

    for(i = 0; temp != NULL; i ++)
    {
        printf("\nEnter data for %d node: ", i+1);
        scanf("%d", &temp->data);
        temp = temp -> next;
    }

    temp = head;

    while(temp != NULL)
    {
        if(count % 2 != 0)
        {
            
            printf("%d ", temp->data);
        }
        count ++;
        temp = temp->next;

    }

    free(head);
    free(second);
    free(third);
    free(fourth);
    free(fifth);
    free(sixth);
    free(seventh);
    free(eighth);
    free(ninth);
    free(tenth);
    free(temp);
    printf("\n");
    return 0;
}

