#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *left;
    struct Node *right;
}Node;

typedef struct Stack{
    Node *value;
    struct Stack *next;
}Stack;

Stack *top = NULL;


void push(Node *data){

    Stack *temp = (Stack *)malloc(sizeof(Stack));
    
    if(!temp){
        printf("Stack Overflow\n");
        return;
    }
    else if(top == NULL){
        temp->value = data;
        temp->next = NULL;
        top = temp;
        return ;
    }

    temp->value = data;
    temp->next = top;
    top = temp;
}

Node * pop(){
    Node *temp = NULL;

    if(top == NULL){
        printf("Stack Underflow\n");
        return NULL;
    }
    else{
        temp = top->value;
        top = top->next;    
    }

    return temp;
}

void display(){
    Stack *t = top;

    while(t != NULL){
        printf("%d ",t->value->data);
        t = t->next;
    }
}

Node * createNode(int data){
    Node *temp = (Node *)malloc(sizeof(Node));
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}


int main(){
    
    Node *first1 = createNode(10);
    Node *first2 = createNode(20);
    Node *first3 = createNode(30);
    Node *first4 = createNode(40);

    push(first1);
    push(first2);
    push(first3);
    push(first4);

    display();

    pop();

    display();

    return 0;
}