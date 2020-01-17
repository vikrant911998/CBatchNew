#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef  struct Circular{
    int capacity;
    int front;
    int rear;
    int *arr;
}Circular;

Circular *cqueue = NULL;

void createQueue(int capacity){
    
    cqueue = (Circular *)malloc(sizeof(Circular));
    cqueue->capacity = capacity;
    cqueue->front = -1;
    cqueue->rear = -1;
    cqueue->arr = (int *)calloc(capacity,sizeof(int));
    
}

void enqueue(int data){
    
    if(cqueue->front == cqueue->rear+1){
        printf("Queue is Full\n");
        return ;
    }
    else if(cqueue->rear == -1){
        cqueue->rear++;
        cqueue->front++;
        cqueue->arr[cqueue->rear] = data;
    }
    else{
       cqueue->rear = (cqueue->rear+1)%cqueue->capacity;
       cqueue->arr[cqueue->rear] = data; 
    }

}


void display(){
    int i=0;

    if(cqueue->rear >= cqueue->front){
        for(i=cqueue->front ; i<=cqueue->rear ;i++){
            printf("%d  ",cqueue->arr[i]);
        }
    }
    else{
        for(i=cqueue->front ; i<cqueue->capacity ;i++){
            printf("%d  ",cqueue->arr[i]);
        }

        for(i=0 ; i<=cqueue->rear ; i++){
            printf("%d  ",cqueue->arr[i]);
        }
    }
}

int dequeue(){
    int temp;

    if(cqueue->front == -1){
        printf("Queue is Empty\n");
        return 0;
    }
    else if(cqueue->front == cqueue->rear){
        temp = cqueue->arr[cqueue->front];
        cqueue->arr[cqueue->front] = 0;
        cqueue->front = -1;
        cqueue->rear = -1;
    }
    else{
        temp = cqueue->arr[cqueue->front];
        cqueue->arr[cqueue->front] = 0;
        cqueue->front = (cqueue->front+1)%cqueue->capacity;
    }

    return temp;
}


bool isEmpty(){
    return (cqueue->front == -1);
}



int main(){
    createQueue(10);

    enqueue(100);
    enqueue(200);
    enqueue(300);
    enqueue(400);
    enqueue(500);
    enqueue(600);
    enqueue(700);
    printf("\n");
    display();
    printf("\n");

    dequeue();
    dequeue();
    dequeue();

    display();
    printf("\n");

    enqueue(800);
    enqueue(900);
    enqueue(1100);

    display();
    printf("\n");

    if(isEmpty()){
        printf("Queue is Empty\n");
    }
    else{
        printf("Queue is Not Empty\n");
    }

    return 0;
}