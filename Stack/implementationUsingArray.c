#include <stdio.h>

#define N 100   // No semicolon here

int stack[N];   // Global stack array
int top = -1;   // Global top variable

void push() {
    int x;
    printf("Enter the element to be pushed: ");
    scanf("%d", &x);

    if (top == N - 1) {
        printf("Stack Overflow\n");
    } else {
        top++;
        stack[top] = x;
        printf("Pushed %d\n", x);
    }
}

void pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
    } else {
        printf("Popped element is %d\n", stack[top]);
        top--;
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements are:\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

void peek() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Top element is %d\n", stack[top]);
    }
}

int main() {
    int ch;
    do {
        printf("\n1.Push\n2.Pop\n3.Display\n4.Peek\n5.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1: push();    break;
            case 2: pop();     break;
            case 3: display(); break;
            case 4: peek();    break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice\n");
        }
    } while (ch != 5);

    return 0;
}
