#include<stdio.h>
#include<stdlib.h>


typedef struct Node{
    int data;
    struct Node *next;
}Node;

Node *front = NULL;
Node *end = NULL;

void enqueue(int data){

    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    if(!newNode){
       printf("Queue is FUll\n"); 
    }

    if(end == NULL && front == NULL){
        front = newNode;
        end = newNode;
    }
    else{
        end->next = newNode;
        end = newNode;
    }
}

int dequeue(){
    if(front == NULL && end == NULL){
        printf("Queue is Empty\n");
        return -1;
    }
    int temp = front->data;
    front = front->next;

    return temp;
}


void display(){
    Node *temp = front;

    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    printf("\nQueue\n");
    display();
    dequeue();
    dequeue();
    printf("\nQueue After\n");
    display();



    return 0;
}

