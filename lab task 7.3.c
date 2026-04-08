#include <stdio.h>
#define MAX 100

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int value) {
    if (rear == MAX - 1) {
        printf("Queue Overflow\n");
        return;
    }
    if (front == -1)
        front = 0;
    queue[++rear] = value;
}

void display() {
    if (front == -1) {
        printf("Queue is empty\n");
        return;
    }
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

void reverseQueue() {
    int stack[MAX];
    int top = -1;

    for (int i = front; i <= rear; i++) {
        stack[++top] = queue[i];
    }

    for (int i = front; i <= rear; i++) {
        queue[i] = stack[top--];
    }
}

int main() {
    int n, value;

    scanf("%d", &n);   

    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        enqueue(value);
    }

    printf("Original Order: ");
    display();

    reverseQueue();

    printf("Reversed Order: ");
    display();

    return 0;
}

