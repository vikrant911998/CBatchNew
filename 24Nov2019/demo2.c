#include<stdio.h>
#include<stdlib.h>

typedef struct Queue{
    int front;
    int end;
    int *arr;
    int capacity;
    int size;
}Queue;


Queue * createQueue(int capacity){
    Queue *queue = NULL;
    queue->capacity = capacity;
    queue->arr = (int *)malloc(queue->capacity*sizeof(int));
    queue->front = -1;
    queue->end = -1;
    queue->size = 0;
    return queue;
}

void enqueue(Queue *queue,int data){

    if(queue->size == queue->capacity){
        printf("Queue is FUll\n");
    }

    if(queue->front == -1 && queue->end == -1){
        queue->front++;
        queue->end++;
    }
    else{
        queue->end++;
    }
    printf("end  = %d\n",queue->end);
    queue->arr[queue->end] = data;
    queue->size++;

}

void display(Queue *queue){
    int i=0;
    
    for(i=queue->front;i<=queue->end;i++){
        printf("%d ",queue->arr[i]);
    }

}

int main(){
    Queue *queue = createQueue(10);

    display(queue);

    enqueue(queue,10);
    enqueue(queue,20);
    enqueue(queue,30);
    enqueue(queue,40);
    enqueue(queue,50);
    printf("Queue Before\n");
    display(queue);

    return 0;
}