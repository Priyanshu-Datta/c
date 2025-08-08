#include <stdio.h>
#include <stdlib.h>
int stack[100];
int top = -1;

void push(int element) {
    if (top == 100 - 1) {
        printf("Stack Overflow. Cannot push %d into the stack.\n", element);
    } else {
        top++;
        stack[top] = element;
        printf("%d pushed into the stack.\n", element);
    }
}

void pop() {
    if (top == -1) {
        printf("Stack is Underflow. \n");
    } else {
        int topvalue = stack[top];
        top--;
        printf("%d deleted from Stack.\n", topvalue);
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack: ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}
int peek(int a){
    int i;
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        
       return top;
    }

}

int main() {
    int choice, n,a;

    while (1) {
        printf("\nMain Menu\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. checkEmpty\n");
        printf("4. checkFull\n");
        printf("5. Tranverse\n");
        printf("6. peek\n");
        printf("7. Exit\n");
        printf("Enter your option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter element to be pushed : ");
                scanf("%d", &n);
                push(n);
                break;
            case 2:
                pop();
                break;
            case 3:
                if (top == -1) {
                    printf("Stack is empty: True\n");
                } else {
                    printf("Stack is empty: False\n");
                }
                break;
            case 4:
                if (top == 100 - 1) {
                    printf("Stack is full: True\n");
                } else {
                    printf("Stack is full: False\n");
                }
                break;
            case 5:
                display();
                break;
            case 6:
                printf("enter a value to peek\n");
                scanf("%d",&a);
                peek(a);
                break;
            case 7:
                exit(0);
            default:
                printf("Invalid option. \n");
        }
    }

    return 0;
}