// Write a C Program to create a linear link list consisting of elements 4 nodes. Take input from the 
// user. Remove an element from the start of the created link list and display the link list after 
// deletion operation
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    int next;
};

int main()
{
    struct node *head = 0;
    struct node *second = 0;
    struct node *third = 0;
    struct node *fourth = 0;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));
    
    printf("\nEnter 1st data: ");
    scanf("%d", &head -> data);

    printf("\nEnter 2nd data: ");
    scanf("%d", &second -> data);

    printf("\nEnter 3rd data: ");
    scanf("%d", &third -> data);

    printf("\nEnter 4th data: ");
    scanf("%d", &fourth -> data);

    head -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = NULL;

    printf("The linked list after deletion of the 1st element...\n");

    free(head);


    while(second != NULL)
    {
        printf("\n%d", second->data);
        second = second-> next;
    }
    
    free(second);
    free(third);
    free(fourth);
    return 0;
}