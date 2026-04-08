#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* head = NULL;
struct Node* tail = NULL;

// Function to append element at end
void append(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    newNode->prev = NULL;

    if (head == NULL) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

// Function to remove last element
void deleteLast() {
    if (tail == NULL)
        return;

    struct Node* temp = tail;

    if (head == tail) {
        head = tail = NULL;
    } else {
        tail = tail->prev;
        tail->next = NULL;
    }

    free(temp);
}

// Function to print list
void display() {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main() {
    int n, value;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        append(value);
    }

    deleteLast();
    display();

    return 0;
}