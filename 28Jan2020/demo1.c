#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct Node{
    int data;
    struct Node *left;
    struct Node *right;
}Node;

Node *root = NULL;

typedef struct Stack{
    Node *value;
    struct Stack *next;
}Stack;

Stack *top1 = NULL;
Stack *top2 = NULL;

void createBST(int data){
    root = (Node *)malloc(sizeof(Node));
    root->data = data;
    root->left = NULL;
    root->right = NULL;
}

void insertNode(Node *rootNode,int data){

    Node *temp = (Node *)malloc(sizeof(Node));
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
 
    if( rootNode->left == NULL && data < rootNode->data ){
        rootNode->left = temp;
    }
    else if( rootNode->right == NULL && data > rootNode->data ){
        rootNode->right = temp;
    }
    else if( data < rootNode->data ){
        insertNode( rootNode->left , data );
    }
    else{
        insertNode( rootNode->right , data );
    }

}

void push1(Node *data){

    Stack *temp = (Stack *)malloc(sizeof(Stack));
    
    if(!temp){
        printf("Stack Overflow\n");
        return;
    }
    else if(top1 == NULL){
        temp->value = data;
        temp->next = NULL;
        top1 = temp;
        return ;
    }

    temp->value = data;
    temp->next = top1;
    top1 = temp;
}

void push2(Node *data){

    Stack *temp = (Stack *)malloc(sizeof(Stack));
    
    if(!temp){
        printf("Stack Overflow\n");
        return;
    }
    else if(top2 == NULL){
        temp->value = data;
        temp->next = NULL;
        top2 = temp;
        return ;
    }

    temp->value = data;
    temp->next = top2;
    top2 = temp;
}

Node * pop1(){
    Node *temp = NULL;

    if(top1 == NULL){
        printf("Stack Underflow\n");
        return NULL;
    }
    else{
        temp = top1->value;
        top1 = top1->next;    
    }

    return temp;
}

Node * getTop1(){
    Node *temp = NULL;

    if(top1 == NULL){
        printf("Stack Underflow\n");
        return NULL;
    }
    else{
        temp = top1->value;
    }

    return temp;
}

Node * pop2(){
    Node *temp = NULL;

    if(top2 == NULL){
        printf("Stack Underflow\n");
        return NULL;
    }
    else{
        temp = top2->value;
        top2 = top2->next;    
    }

    return temp;
}

Node * getTop2(){
    Node *temp = NULL;

    if(top2 == NULL){
        printf("Stack Underflow\n");
        return NULL;
    }
    else{
        temp = top2->value;
    }

    return temp;
}

bool isEmpty1(){
    return (top1 == NULL);
}

bool isEmpty2(){
    return (top2 == NULL);
}



void IterativePostOrder(Node *rootNode){

    push1(rootNode);
    Node *temp;

    while( isEmpty1() == false ){
        
        temp = getTop1();
        printf("Element Pushed in s2 = %d\n",temp->data);
        pop1();
        push2(temp);

        if( temp->left != NULL ){
            push1(temp->left);
        }
        if( temp->right != NULL ){
            push1(temp->right);
        }

    }

    while( isEmpty2() == false ){
        
        temp = getTop2();
        printf("%d  ",temp->data);
        pop2();
    }

}


int main(){
    
    createBST(10);
    insertNode(root,20);
    insertNode(root,30);
    insertNode(root,40);
    insertNode(root,17);
    insertNode(root,9);

    IterativePostOrder(root);

    return 0;
}