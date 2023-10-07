#include <stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

void creating_node_and_linklist(int data);
void deleting_data(int data);
void printing_linklist();

int main()
{
    creating_node_and_linklist(2);
    creating_node_and_linklist(5);
    creating_node_and_linklist(4);
    creating_node_and_linklist(3);
    creating_node_and_linklist(1);
    
    printing_linklist();
 
    deleting_data(3);
 
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

void deleting_data(int data)
{
    struct node *temp = head;
    
    //searching for deleting node
    while( temp->next->data != 3 )
    {
        temp = temp->next;
    }

    struct node *deleteNode = temp->next;
    temp->next = temp->next->next;
    free(deleteNode);
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