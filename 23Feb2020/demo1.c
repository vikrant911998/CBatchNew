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

Node *root = NULL;

void bottomLevelOrder(Node *rootNode){
    if(rootNode == NULL){
        return ;
    }

    push(rootNode);

    bottomLevelOrder(rootNode->right);
    bottomLevelOrder(rootNode->left);
}

void print(){
    Node *temp = pop();

    while(temp != NULL){
        printf("%d ",temp->data);
        temp = pop();
    }
}

int main(){

    Node *n1 = createNode(1);
    Node *n2 = createNode(2);
    Node *n3 = createNode(3);
    Node *n4 = createNode(4);
    Node *n5 = createNode(5);


    root = n1;
    n1->left = n2;
    n1->right = n3;
    n2->left = n4;
    n2->right = n5;

    bottomLevelOrder(root);
    print();

    return 0;
}


