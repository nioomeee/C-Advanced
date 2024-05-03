#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    int *next;
};

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;

    head = (int*)malloc(sizeof(struct node));
    second = (int*)malloc(sizeof(struct node));
    third = (int*)malloc(sizeof(struct node));
    
    printf("Enter the 1st data: ");
    scanf("%d", &head->data);

    head->next = second;

    printf("Enter the 2nd data: ");
    scanf("%d", &second->data);
    second->next = third;

    printf("Enter the 3rd data: ");
    scanf("%d", &third->data);
    third->next = NULL;

    printf("\nInserting the new node at the beginning...\n");
    
    struct node *newNode;
    newNode = (int*)malloc(sizeof(struct node));

    struct node *temp;
    temp = (int*)malloc(sizeof(struct node));
   
    printf("\nEnter the data you want to add at position 1 now: ");
    scanf("%d", &(newNode->data));

    temp->data = newNode->data;

    newNode->data = head->data;

    head->data = temp->data;

    head->next = newNode;

    newNode ->next = second;

    // Printing the newly ordered linked list
    while(head!= NULL)
    {
        printf("\n%d", head->data);
        head = head->next; 
    }

    return 0;
}