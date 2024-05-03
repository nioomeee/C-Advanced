// Write a C program to create a linear link list consisting of 5 nodes. Display all the nodes of the
// link list on the terminal. Take input from the user for the node to be searched from the created
// link list and if the node exist display the position of the searched node on the terminal.
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    int* next;
};

int main()
{
    // Declaring 5 nodes
    struct node* head = NULL;
    struct node* second = NULL;
    struct node* third = NULL;
    struct node* fourth = NULL;
    struct node* fifth = NULL;

    // Allocating memory
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));
    fifth = (struct node*)malloc(sizeof(struct node));

    // Ordering the nodes
    head -> next = second; 
    second -> next = third; 
    third -> next = fourth; 
    fourth -> next = fifth; 
    fifth -> next = NULL; 

    // Taking input from the user
    struct node* temp;
    temp = head;

    for (int i = 0; temp!=NULL; i++)
    {
        printf("\nEnter the data for %d: ", i+1);
        scanf("%d", &temp->data);
        temp = temp -> next;
    }

    // taking the value to be searched
    int n, found;
    printf("\nEnter the value to be searched in the linked list: ");
    scanf("%d", &n);

    temp = head;

    for (int i = 0; temp!=NULL; i++)
    {
        if(n == temp->data)
        {
            printf("\n%d found at %d node", n, i+1);
            found = 1;
            break;
        }
        temp = temp -> next;
    }

    if(!found)
    {
        printf("\nThe value you searched doesn't exist");
    }
    
    printf("\n");
    return 0;
}