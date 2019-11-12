#include<stdio.h>
#include<stdlib.h>

typedef struct Stack{
    int data;
    struct Stack *next;
}Stack;

Stack *top=NULL;

void push(int data){
    Stack *newNode = (Stack *)malloc(sizeof(Stack));
    newNode->data = data;
    newNode->next = NULL;
    
    if(top == NULL){
        top = newNode;
    }
    else{
        newNode->next = top;
        top = newNode;
    }
}

int pop(){
    if(top == NULL)
        return 0;
    int temp = top->data;
    top = top->next;

    return temp;
}

int peek(){
    if(top == NULL)
        return 0;
    
    return (top->data);
}

void display(){
    Stack *temp = top;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
}



int main(){
    push(10);
    push(20);
    push(30);
    push(40);

    display();

    printf("Peeked Element : %d\n",peek());
    // printf("Popped Element : %d\n",pop());

    display();


    return 0;
}