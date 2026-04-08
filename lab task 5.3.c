#include <stdio.h>
#include <ctype.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char x) {
    stack[++top] = x;
}

char pop() {
    return stack[top--];
}

char peek() {
    return stack[top];
}

int isEmpty() {
    return top == -1;
}

int precedence(char x) {
    if (x == '+' || x == '-')
        return 1;
    if (x == '*' || x == '/')
        return 2;
    if (x == '^')
        return 3;
    return 0;
}

int main() {
    char infix[MAX], postfix[MAX];
    int i, j = 0;
    int error = 0;

    printf("Enter infix expression: ");
    scanf("%s", infix);

    for (i = 0; infix[i] != '\0'; i++) {
        if (isalnum(infix[i])) {
            postfix[j++] = infix[i];
        }
        else if (infix[i] == '(') {
            push(infix[i]);
        }
        else if (infix[i] == ')') {
            while (!isEmpty() && peek() != '(')
                postfix[j++] = pop();

            if (isEmpty()) {
                error = 1;
                break;
            }
            pop();
        }
        else {
            while (!isEmpty() && precedence(peek()) >= precedence(infix[i]))
                postfix[j++] = pop();
            push(infix[i]);
        }
    }

    while (!isEmpty()) {
        if (peek() == '(') {
            error = 1;
            break;
        }
        postfix[j++] = pop();
    }

    if (error)
        printf("Error: Mismatched parentheses\n");
    else {
        postfix[j] = '\0';
        printf("Postfix expression: %s\n", postfix);
    }

    return 0;
}

