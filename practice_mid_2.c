#include <stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

void creating_node_and_linklist(int data);
void insert_node(int data);
void printing_linklist();

int main()
{
    creating_node_and_linklist(2);
    creating_node_and_linklist(5);
    creating_node_and_linklist(4);
    creating_node_and_linklist(3);
    creating_node_and_linklist(1);
    
    printing_linklist();
 
    insert_node(5);
 
    printing_linklist();
    
    return 0;
}

void creating_node_and_linklist(int data)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;

    if ( current == NULL )
    {
        current = newNode;
        head = newNode;
        return;
    }

    current->next = newNode;
    current = newNode;
}
void printing_linklist()
{
    struct node *temp = head;

    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void insert_node(int data)
{
    struct node *temp = head;
    while( temp->data != data )
    {
        temp = temp->next;
    }

    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = 33;

    newNode->next = temp->next;
    temp->next = newNode;
}