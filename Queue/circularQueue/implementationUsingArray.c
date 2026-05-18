#include<stdio.h>
#include<stdlib.h>
# define N 5
int queue[N];
int front=-1;
int rear=-1;
void  enqueue(int x){
    if(front==-1 && rear==-1){
        front=rear=0;
        queue[rear]=x;
    }
    else if((rear+1)%N==front){
        printf("Queue is full\n");
    }
    else{
        rear=(rear+1)%N;
        queue[rear]=x;
    }
}
void dequeue(){
    if(front==-1 && rear==-1){
        printf("Queue is empty\n");
    }
    else if(front==rear){
        printf("Dequeued element is %d\n",queue[front]);
        front=rear=-1;
    }
    else{
        printf("Dequeued element is %d\n",queue[front]);
        front=(front+1)%N;
    }
}
void display(){
    if(front==-1 && rear==-1){
        printf("Queue is empty\n");
    }
    else{
        printf("Queue elements are:\n");
        int i=front;
        while(1){
            printf("%d\n",queue[i]);
            if(i==rear){
                break;
            }
            i=(i+1)%N;
        }
    }
}
void peek(){
    if(front==-1 && rear==-1){
        printf("Queue is empty\n");
    }
    else{
        printf("Front element is %d\n",queue[front]);
    }
}
int main(){
    int choice,x;
    while(1){
        printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Peek\n5.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter the element to be enqueued: ");
                scanf("%d",&x);
                enqueue(x);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                peek();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}