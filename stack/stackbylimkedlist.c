#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void push(struct Node** top, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *top;
    *top = newNode;
    printf("%d pushed to stack\n", data);
}

int pop(struct Node** top) {
    if (*top == NULL) {
        printf("Stack underflow\n");
        return -1;
    }
    int topvalue = (*top)->data;
    struct Node* temp = *top;
    *top = (*top)->next;
    free(temp);
    return topvalue;
}

int peek(struct Node* top) {
    if (top == NULL) {
        printf("Stack is empty\n");
        return -1;
    }
    return top->data;
}

void displayStack(struct Node* top) {
    if (top == NULL) {
        printf("Stack is empty\n");
        return;
    }
    struct Node* temp = top;
    printf("Stack elements are: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    
    struct Node* stack = NULL;
    int a,b,c;
    printf("elements:");
    scanf("%d %d %d",&a,&b,&c);

    push(&stack, a);
    push(&stack, b);
    push(&stack, c);
    displayStack(stack);

    printf("Top element is %d\n", peek(stack));

    printf("%d popped from stack\n", pop(&stack));
    displayStack(stack);

    printf("Top element is %d\n", peek(stack));

    return 0;
}