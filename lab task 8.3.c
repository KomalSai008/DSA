#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

// Create circular linked list
void create(int n) {
    struct Node *temp, *newNode;
    int value;

    for(int i = 0; i < n; i++) {
        scanf("%d", &value);

        newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = value;

        if(head == NULL) {
            head = newNode;
            newNode->next = head;
            temp = head;
        } else {
            temp->next = newNode;
            newNode->next = head;
            temp = newNode;
        }
    }
}

// Insert node at position
void insertAtPos(int value, int pos) {
    struct Node *newNode, *temp = head;

    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;

    if(pos == 1) {
        while(temp->next != head)
            temp = temp->next;

        newNode->next = head;
        temp->next = newNode;
        head = newNode;
        return;
    }

    for(int i = 1; i < pos-1; i++)
        temp = temp->next;

    newNode->next = temp->next;
    temp->next = newNode;
}

// Display list
void display(int total) {
    struct Node* temp = head;

    for(int i = 0; i < total; i++) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main() {
    int n, value, pos;

    scanf("%d", &n);
    create(n);

    scanf("%d", &value);
    scanf("%d", &pos);

    insertAtPos(value, pos);

    display(n + 1);

    return 0;
}
