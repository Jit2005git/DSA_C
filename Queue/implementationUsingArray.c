#include <stdio.h>
#define MAX 100

int queue[MAX];
int front = -1;
int rear = -1;

void enqueue() {
    int x;
    printf("Enter the element to be enqueued: ");
    scanf("%d", &x);

    if (rear == MAX - 1) {
        printf("Queue Overflow\n");
    }
    else if (front == -1 && rear == -1) {
        front = rear = 0;
        queue[rear] = x;
        printf("Enqueued %d\n", x);
    }
    else {
        rear++;
        queue[rear] = x;
        printf("Enqueued %d\n", x);
    }
}
  void dequeue() {
    if (front == -1 && rear == -1) {
        printf("Queue Underflow\n");
    }
    else if (front == rear) {
        printf("Dequeued element is %d\n", queue[front]);
        front = rear = -1;
    }
    else {
        printf("Dequeued element is %d\n", queue[front]);
        front++;
    }
}

void display() {
    if (front == -1 && rear == -1) {
        printf("Queue is empty\n");
    }
    else {
        printf("Queue elements are:\n");
        for (int i = front; i < rear+1; i++) {
            printf("%d\n", queue[i]);
        }
    }
}
void peek() {
    if (front == -1 && rear == -1) {
        printf("Queue is empty\n");
    }
    else {
        printf("Front element is %d\n", queue[front]);
    }
}
int main(){
    enqueue();
    enqueue();
    display();
    dequeue();
    peek();
    display();
}