#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
    struct node* prev;
};
// creation of a node
struct node* createnode(int data)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    newnode->prev = NULL;
    return newnode;
}
// insertion at end
void insertFront(struct node** head, int data)
{
    struct node* newnode = createnode(data);

    if (*head == NULL)
    {
        *head = newnode;
        return;
    }

    struct node* temp = *head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newnode;
    newnode->prev = temp;
}
// travesal
void display (struct node*head)
{
	while(head!=NULL)
	{
		printf("%d->",head->data);
		head =head->next;
	}
	printf("NULL\n");
}
int main()
{
    int  i, n, x;

    // initially list is empty
    struct Node *head = NULL;

    // input number of employees
    scanf("%d",&n);

    // loop to insert each employee ID
    for(i=0;i<n;i++)
    {
        // read employee ID
        scanf("%d",&x);

        // insert employee at front
        insertFront(&head,x);

        // display current state of list
        display(head);
    }

    return 0;
}

