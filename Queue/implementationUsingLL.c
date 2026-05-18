#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* front=0;
struct Node* rear=0;
void enqueue(int x){
struct Node*newNode;
newNode=(struct Node*)malloc(sizeof(struct Node));
newNode->data=x;
newNode->next=0;
if(front==0 && rear==0){
front=rear=newNode;
printf("Enqueued %d\n",x);
}
else{
    rear->next=newNode;
    rear=newNode;
}
printf("Enqueued %d\n",x);
}
void display(){
    struct Node*temp;
    if(front==0 && rear==0){
        printf("Queue is empty\n");
    }
    else{
        temp=front;
        printf("Queue elements are:\n");
        while(temp!=0){
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }
}
void dequeue(){
    struct Node*temp;
    if(front==0 && rear==0){
        printf("Queue Underflow\n");
    }
    else if(front==rear){
        printf("Dequeued element is %d\n",front->data);
        free(front);
        front=rear=0;
    }
    else{
        temp=front;
        printf("Dequeued element is %d\n",front->data);
        front=front->next;
        free(temp);
    }
}
void peek(){
    if(front==0 && rear==0){
        printf("Queue is empty\n");
    }
    else{
        printf("Front element is %d\n",front->data);
    }
}
int main(){
    enqueue(10);
    enqueue(15);
    enqueue(20);
    display();
    peek();
    dequeue();
    display();
    peek();
    return 0;
}
